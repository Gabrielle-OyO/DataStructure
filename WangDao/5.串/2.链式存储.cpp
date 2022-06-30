
typedef struct StringNode {
  char ch;  //每个结点存1个字符 1B=4bit  1B字符&&1B指针
  struct StingNode *next;
} StringNode, *String;

typedef struct StringNode {
  char ch[4];  //每个结点存多个字符
  struct StringNode *next;
} StringNode, *String;
//提高存储密度