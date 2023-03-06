__Note:__ Some assignments are still in use at RPI so I can't release solutions or sensitive configuration information publicly. These materials are usually available on request. A full list of my teaching history is available on my [RPI personal site](https://www.cs.rpi.edu/~holzbh/). Every assignment linked is one I wrote, including my own solution, test cases, and autograding as applicable.

## Contents:
- [Portfolio](https://github.com/holzbh/holzbh/tree/main/teaching_portfolio#portfolio)
- [Primary Course Topics](https://github.com/holzbh/holzbh/tree/main/teaching_portfolio#primary-course-topics)

### Portfolio:
- [Toy B+ trees](https://github.com/holzbh/holzbh/tree/main/teaching_portfolio/bplus_trees)
  - For CSCI-1200 Data Structures
  - Instructor test code (61 assertions) and autograding configuration not included
- [Distance Vector Routing Simulation](https://github.com/holzbh/holzbh/tree/main/teaching_portfolio/distance_vector_routing)
  - For CSCI-4964 Computer Communication Networks
  - Odd single-threaded simulation of multiple routers exchanging information
  - Examples based on "Computer Networking: A Top-Down Approach", 7th ed. by Kurose and Ross
  - Autograding configuration included to work with [Submitty](https://submitty.org/index/overview)
- [Reverse Select lab](https://github.com/holzbh/holzbh/tree/main/teaching_portfolio/reverse_select)
  - For CSCI-4220 Network Programming
  - Inverts the classic `select()` behavior to have many servers, one client
  - Solution included, requires code from [UNIX Network Programming's repo](https://github.com/unpbook/unpv13e)
- [Toy Kademlia](https://github.com/holzbh/holzbh/tree/main/teaching_portfolio/toy_kad)
  - For CSCI-4220 Network Programming
  - Slightly simplified version of Kademlia DHT with some arbitrary constraints to increase coverage in autograding
  - Uses Python/gRPC to show a modern RPC library
  - Autograding design by graduate TA [emaicus](https://github.com/emaicus)
- [TCP option ssthresh](https://github.com/holzbh/holzbh/tree/main/teaching_portfolio/kernel_ssthresh)
  - For CSCI-4310/6310 Networking in the Linux Kernel
  - Exposure to TCP Options and the implementation in the kernel, including alignment assumptions
  - "Simple" problem definition, requires modifying both receiver and sender behavior in TCP
  - Uses Linux `tc qdisc` to manipulate traffic behavior for testing
  - Must use a properly formed `.diff` patch file, provide `.pcapng` traces from `tcpdump`/Wireshark
- [Example lectures](https://github.com/holzbh/holzbh/tree/main/teaching_portfolio/lectures)
  - `.pptx` versions have additional presenter notes in PowerPoint, may not show up in other viewers
  - KerNet_SystemCalls: Discusses how to implement system calls and the `SYSCALL\_DEFINE` family of macros.
  - KerNet\_tcphdr\_tcpsock: Describes the TCP header and socket structures as well as the relationship between several of the nested sockets in the network implementation code.
  - NetProg: Peer to Peer examples (partially sourced from Kurose and Ross 7th ed. with attribution)
- [Data Structures Spring 2022 calendar](https://www.cs.rpi.edu/academics/courses/spring22/csci1200/calendar.php) contains all lectures/homework handouts from Spring 2022.

### Primary Course Topics
- CSCI-1200 [Data Structures](https://www.cs.rpi.edu/academics/courses/spring23/csci1200/): Syllabus/Course Calendar links publicly accesible. Objects/ADTs, C++ STL (`vector`, `list`, `map`, `unordered_map`, `priority_queue`), our own templated implementation of common STL classes, recursion, explicit memory management, debugging, inheritance
- CSCI-4210 Operating Systems: System calls, `fork()`, POSIX threads, CPU scheduling, memory/virtual memory, filesystems, disk, C sockets
- CSCI-4220 [Network Programming](https://www.cs.rpi.edu/~holzbh/NetProg21/index.php): `fork()`, `select()`, POSIX threads, C and Python socket programming, gRPC, TFTP, P2P, security, TLS overview
- CSCI-4310/6310 [Networking In the Linux Kernel](https://www.cs.rpi.edu/~holzbh/KerNet21/index.php): Linux C implementation, common data structures, `net/ipv4` code, TCP, IP, patches and building the kernel
- CSCI-4964 [Computer Communication Networks](https://www.cs.rpi.edu/~holzbh/CCN22/index.php): Applications (HTTP, DNS, DHCP, P2P), Transport (UDP, TCP), Network (router concepts, OSPF, RIP, BGP, routing vs forwarding), Link Layer (CSMA, mediums, switches, ARP), Security (Authentication, confidentiality, public-private keys, CAs, TLS, IPSec)
