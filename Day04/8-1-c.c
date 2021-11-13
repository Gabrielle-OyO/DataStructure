#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>
#include<sys/types.h>
#include<netinet/in.h>
#include<sys/socket.h>
#include<sys/wait.h>
#include<arpa/inet.h>
#include<unistd.h>
#include<netdb.h>
#define SERVPORT 3333
#define MAXDATASIZE 100
int main(int argc,char *argv[])
{
  int sockfd,recvbytes;
  char buf[MAXDATASIZE];//接收数据的buf
  struct hostent *host;//调用gethostbyname函数
  struct sockaddr_in serv_addr;//服务器地址
  if(argc<2)
  {
    fprintf(stderr,"Please enter the server's hostname!\n");
    exit(1);
  }
  if((host=gethostbyname(argv[1]))==NULL)//IP地址则直接存放IP地址  IP地址名称 通过解析成IP地址进行存放
  {
    herror("gethostbyname error!\n");//用域名或者主机名获取地址，操作系统提供的库函数
    exit(1);
  }
  if((sockfd=socket(AF_INET,SOCK_STREAM,0))==-1)
  {
    perror("socket create error!\n");
    exit(1);
  }
  serv_addr.sin_family=AF_INET;//服务器类型
  serv_addr.sin_port=htons(SERVPORT);//服务器端口
  serv_addr.sin_addr=*((struct in_addr *)host->h_addr);//取地址
  bzero(&serv_addr.sin_zero,8);
  if(connect(sockfd,(struct sockaddr *)&serv_addr,sizeof(struct sockaddr))==-1)
  {
    perror("Error connect...\n");
    exit(1);
  }
  if((recvbytes=recv(sockfd,buf,MAXDATASIZE,0))==-1)
  {
    perror("Error connect...\n");
    exit(1);
  }
  buf[recvbytes]='\0';
  printf("Recieve: %s",buf);
  printf("sockfd:--- %d\n",sockfd);
  close(sockfd);
}

/*

struct hostent
{
    char *h_name;  //主机名
    char **h_aliases;  //主机所有的别名构成的一个字符串数组
    int h_addrtype; //主机IP地址的类型 例如IPV4还是IPV6
    int h_length;  //主机ip地址长度
    char **h_addr_list;  //表示的是主机的ip地址，注意，这个是以网络字节序存储的。千万不要直接用printf带%s参数来打这个东西，会有问题的哇。
                           //所以到真正需要打印出这个IP的话，需要调用inet_ntop()。
};

*/

/*
htons()函数
函数原型是：uint16_t htons(uint16_t hostlong)
其中,hostlong是主机字节顺序表达的16位数，htons中的h–host主机地址，to–to,n–net网络，s–signed long无符号的短整型(32位的系统是2字节)；
函数返回值是一个16位的网络字节顺序；
函数的作用是将一个16位数从主机字节顺序转换成网络字节顺序，简单的说就是把一个16位数高低位呼唤。

ntohs()函数
函数原型是：uint16_t ntohs(uint16_t hostlong)
其中,hostlong是网络字节顺序表达的16位数，ntohs中的,n–net网络，to–toh–host主机地址，s–signed long有符号的短整型(32位的系统是2字节)；
函数返回值是一个16位的主机字节顺序；
函数的作用是将一个16位数由网络字节顺序转换为主机字节顺序，简单的说就是把一个16位数高低位互换。
*/

/*
inet_ntoa()函数
函数原型： char FAR* PASCAL FAR inet_ntoa( struct in_addr in);
MSDN上本函数的原型描述为：unsigned long inet_addr( __in const char *cp);
in：一个表示Internet主机地址的结构。

inet_pton()函数
函数原型：int inet_pton(int af, const char *src, void *dst);
这个函数转换字符串到网络地址，第一个参数af是地址族，转换后存在dst中，inet_pton 是inet_addr的扩展，支持的多地址族有下列：
af = AF_INET
src为指向字符型的地址，即ASCII的地址的首地址（ddd.ddd.ddd.ddd格式的），函数将该地址转换为in_addr的结构体，并复制在*dst中
af =AF_INET6
src为指向IPV6的地址，函数将该地址
转换为in6_addr的结构体，并复制在*dst中
如果函数出错将返回一个负值，并将errno设置为EAFNOSUPPORT，如果参数af指定的地址族和src格式不对，函数将返回0。

inet_pton()函数
函数原型：int inet_pton(int af, const char *src, void *dst);
这个函数转换字符串到网络地址，第一个参数af是地址簇，第二个参数*src是来源地址，第三个参数* dst接收转换后的数据。
inet_pton 是inet_addr的扩展，支持的多地址族有下列：
af = AF_INET
src为指向字符型的地址，即ASCII的地址的首地址（ddd.ddd.ddd.ddd格式的），函数将该地址转换为in_addr的结构体，并复制在*dst中。
af = AF_INET6
src为指向IPV6的地址，函数将该地址转换为in6_addr的结构体，并复制在*dst中。
如果函数出错将返回一个负值，并将errno设置为EAFNOSUPPORT，如果参数af指定的地址族和src格式不对，函数将返回0。
*/