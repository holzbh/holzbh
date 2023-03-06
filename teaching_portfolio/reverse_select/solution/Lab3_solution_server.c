#include	"../unpv13e/lib/unp.h"

void
str_cli_once(FILE *fp, int sockfd)
{
	char	sendline[MAXLINE], recvline[MAXLINE];
	int maxfdp1, n;
	fd_set rset;

	for( ; ;){
		maxfdp1 = max(fileno(fp),sockfd)+1;
		FD_ZERO(&rset);
		FD_SET(fileno(fp),&rset);
		FD_SET(sockfd,&rset);
		Select(maxfdp1,&rset,NULL,NULL,NULL);

		if(FD_ISSET(sockfd,&rset)){
			if ((n = Readline(sockfd, recvline, MAXLINE)) > 0)
				err_quit("str_cli: server received client input");
			else if(n<0)
				err_sys("str_cli: server errored on read");
			else
				err_quit("str_cli: client disconnected");
		}

		if(FD_ISSET(fileno(fp),&rset)){
			if(Fgets(sendline, MAXLINE, fp) != NULL){
				printf("Writing %s",sendline);
				Writen(sockfd, sendline, strlen(sendline));
			}
			else{
				printf("Shutting down due to EOF\n");
				Close(sockfd);
				exit(0);
			}
		}

	}
}

int
main(int argc, char **argv)
{
	int					listenfd, connfd;
	pid_t				childpid;
	socklen_t			clilen;
	struct sockaddr_in	cliaddr, servaddr;

	if(argc < 2){
		printf("Proper usage is %s [offset from port 9877]\n",argv[0]);
	}

	listenfd = Socket(AF_INET, SOCK_STREAM, 0);

	bzero(&servaddr, sizeof(servaddr));
	servaddr.sin_family      = AF_INET;
	servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
	servaddr.sin_port        = htons(SERV_PORT+atoi(argv[1]));

	Bind(listenfd, (SA *) &servaddr, sizeof(servaddr));

	Listen(listenfd, LISTENQ);

	for ( ; ; ) {
		clilen = sizeof(cliaddr);
		connfd = Accept(listenfd, (SA *) &cliaddr, &clilen);
		printf("Accepted connection\n");


		Close(listenfd);	/* close listening socket pre-emptively */
		str_cli_once(stdin,connfd);	/* process the request */
	}
}
