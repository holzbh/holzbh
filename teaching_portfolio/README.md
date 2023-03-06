https://github.com/holzbh/holzbh/tree/main/teaching_portfolio

Some assignments are still in use at RPI so I can't release solutions or sensitive configuration information publicly. These materials are usually available on request. A full list of my teaching history is available on my [RPI personal site](https://www.cs.rpi.edu/~holzbh/)

This portfolio contains:
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
  - Autograding design by graduate TA[emaicus](https://github.com/emaicus)
- [TCP option ssthresh](https://github.com/holzbh/holzbh/tree/main/teaching_portfolio/kernel_ssthresh)
  - For CSCI-4310/6310 Networking in the Linux Kernel
  - Exposure to TCP Options and the implementation in the kernel, including alignment assumptions
  - "Simple" problem definition, requires modifying both receiver and sender behavior in TCP
  - Uses Linux `tc qdisc` to manipulate traffic behavior for testing
  - Must use a properly formed `.diff` patch file, provide `.pcapng` traces from `tcpdump`/Wireshark
- [Example lectures]()
  - TBD, Kernet
  - TBD, Kernet
  - TBD, Net Prog
- [Data Structures Spring 2022 calendar](https://www.cs.rpi.edu/academics/courses/spring22/csci1200/calendar.php) contains all lectures/homework handouts from Spring 2022.

A further description of the courses I've taught is as follows

A full list of the courses I've taught and their primary topics covered are:
- WIP
