
//静态数组实现（定长顺序存储）
#define MAXSIZE 255  //定义串的最大长度
typedef sctuct {
  char ch[MAXSIZE];  //每个分量储存一个字符
  int length;        //串的实际长度
}
SString;

//动态数组实现（堆分配存储）
typedef struct {
  char *ch;    //按串分配存储区，ch指向串的基地址
  int length;  //串的长度
} HString;

HString S;
S.ch = (char *)malloc(MAXLEN * sizeof(char));
S.length = 0;