---
layout: default
title: CSCI 4220 Lab 3
description: CSCI 4220 Lab 3
urlcolor: cyan
header-includes:
    - \usepackage{listings}
    - \usepackage{graphicx}
    - \lstset{basicstyle=\ttfamily}
---

# Lab 3: select and Reverse Echo Server/Client

### Due Saturday, September 25th

In this lab you will practice using TCP and `select()` and will be reversing the roles of server and client from the echo server application we have previously explored. You may want to make use of __unp.h__ since it has many common includes. You may also want to use some of the book code as a starting point for your solution. In this assignment, you **cannot** use `fork()`.

This lab will have you reverse the usual roles of the echo "client" and "server" - the client will still connect to the server, but it will be the server that reads from stdin and sends the message to the client, and the client will send the message back to the server. Please carefully read the description below before beginning.

Write a pair of C (or C++) programs which are a clearly named echo server and client respectively. You will need to submit both files and a Makefile with two targets `client` and `server`. We have provided a sample Makefile that you can modify - if you are using C and match our filenames, then no modification is necessary.

The server can support up to 1 client at once. The server should read from standard input, and whenever a string is entered, it should send that string to the connected client. If the server reads an end-of-file, it should close all connections and terminate. The server should take one argument, a positive integer. This number should be added to 9877 and used as the port number for the server.

The client should support connecting up to 5 copies of the server on different ports. Whenever a message is received from a server, the port number and the message should be printed to standard output. Your client should use `select()` instead of blocking on `read()`. If the user enters a port number via `stdin`, and the client has less than 5 connections in use, it should attempt to connect to `127.0.0.1` on that port. Any input provided from `stdin` while all connections are in use should be ignored. If a server closes the connection, the client should print a message stating the connection was closed and include the port number of the server. The client should not exit if a server closes.

On the following page is an example of what communicating with one server followed by another server might look like, with the same client being used for both. Due to how complicated displaying interleaved output is, there is not an example of the client simultaneously connected to multiple servers, but you should test that your code still works in such a situation.

\newpage

Example server input (lines starting with > are output, `^C` is Ctrl+C, `^D` is Ctrl+D):
```
???@???:~/Teaching/NetProgF20/longlabs$ ./server.out 1
>Accepted connection
The wolf says,
    "Awooooooo~"
-A wolf
^D
>Shutting down due to EOF
???@???:~/Teaching/NetProgF20/longlabs$ ./server.out 3
>Accepted connection
This is another connection
>str_cli: client disconnected
```

Example client output (lines with > are output):
```
???@???:~/Teaching/NetProgF20/longlabs$ ./client.out
9878
>9878 The wolf says,
>9878     "Awooooooo~"
>9878 -A wolf
>Server on 9878 closed
9880
>9880 This is another connection
^C
???@???:~/Teaching/NetProgF20/longlabs$
```

\vspace{1.0in}

Here is a diagram you may find helpful as well in conceptualizing the lab:

\includegraphics{Lab3ExtraFigure}

