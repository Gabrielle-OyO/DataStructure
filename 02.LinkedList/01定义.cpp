struct ListNode {
  int val;                                 //节点上存储的元素
  ListNode* next;                          //指向下一个节点的指针
  ListNode(int x) : val(x), next(NULL) {}  //结点的构造函数
};

// 自定义构造函数初始化结点
ListNode* head = new ListNode(5)

    //默认构造函数
    ListNode* head = new ListNode();
head->val = 5;

// 如果不定义构造函数使用默认构造函数的话，在初始化的时候就不能直接给变量赋值！