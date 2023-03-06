#include	"../unpv13e/lib/unp.h"

//XXX: Sometimes dies with "select: Error bad file descriptor", should fix that

int
main(int argc, char **argv)
{
	struct sockaddr_in	servaddr;
	int					servers[5], ports[5];
	int					maxfdp1, stdineof;
	fd_set				rset;
	char				buf[MAXLINE];
	int					i, n;
	FILE*				fp;

	fp = stdin;

	for(i=0; i<5; i++){
		servers[i] = -1;
	}

	stdineof = 0;
	FD_ZERO(&rset);
	for ( ; ; ) {
		maxfdp1 = fileno(fp);
		if (stdineof == 0)
			FD_SET(fileno(fp), &rset);
		for(i=0; i<5; i++){
			if(servers[i] != -1){
				FD_SET(servers[i], &rset);
				maxfdp1 = max(maxfdp1, servers[i]);
			}
		}
		maxfdp1++; //Bad to do this here, since sometimes maxfdp1 isn't +1 this means.


		Select(maxfdp1, &rset, NULL, NULL, NULL);

		for(int i=0; i<5; i++){
			if (FD_ISSET(servers[i], &rset)) {	/* socket is readable */
				if ( (n = Read(servers[i], buf, MAXLINE)) == 0) {
					printf("Server on %d closed\n",ports[i]);
					Close(servers[i]);
					servers[i] = -1;
					continue;
				}

				printf("%d %s",ports[i],buf);
				bzero(buf,n);
				//Write(fileno(stdout), buf, n);
			}
		}

		if (FD_ISSET(fileno(fp), &rset)) {  /* input is readable */
			if ( (n = Read(fileno(fp), buf, MAXLINE)) == 0 || buf[0]=='\n') {
				stdineof = 1;
				for(i=0; i<5; i++){
					if(servers[i] != -1){
						Shutdown(servers[i], SHUT_WR);	/* send FIN */
					}
				}
				FD_CLR(fileno(fp), &rset);
				continue;
			}

			//We got a new thing to connect to!
			for(i=0; i<5; i++){
				if(servers[i]==-1){
						servers[i] = Socket(AF_INET, SOCK_STREAM, 0);
						ports[i] = atoi(buf);

						bzero(&servaddr, sizeof(servaddr));
						servaddr.sin_family = AF_INET;
						servaddr.sin_port = htons(ports[i]);
						printf("Debugging: connecting on port %i\n",atoi(buf));
						Inet_pton(AF_INET, "127.0.0.1", &servaddr.sin_addr);

						Connect(servers[i], (SA *) &servaddr, sizeof(servaddr));
						break;
				}
			}
		}
	}

	exit(0);
}
