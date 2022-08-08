

//设计OSPF路由协议的链式存储结构 保存LSI的信息

// link的结构
typedef struct {
  unsigned int ID, IP;
} LinkNode;

// Net的结构
typedef struct {
  unsigned int Prefix, Metric, Mask;
} NetNode;

typedef struct Node {
  int flag;  // flag=1为link，flag=0为net
  union {    //共享内存
    LinkNode Lnode;
    NetNode Nnode;
  } LinkORNet;
  unsigned int Metric;
  struct Node *next;
} ArcNode;  //弧结点

typedef struct hNode {
  unsigned int RouterID;
  ArcNode *LN_link;
  struct hNode *next;
} hNODE;  //表头结点