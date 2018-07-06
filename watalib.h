#ifndef WATALIB_H
#define WATALIB_H


extern int watalab_tcp_listen(int port);
extern int watalab_accept(int sock_listen);
extern int watalab_tcp_connect(const char *hostname, int port);

#endif
