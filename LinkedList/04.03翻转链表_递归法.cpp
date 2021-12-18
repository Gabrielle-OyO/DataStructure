
//递归写法和双指针法实质上都是从前往后翻转指针指向，
//其实还有另外一种与双指针法不同思路的递归写法：从后往前翻转指针指向

// 【这道题不太懂】

class Solution {
 public:
  ListNode* reverseList(ListNode* head) {
    // 边缘条件判断
    if (head == NULL) return NULL;
    if (head->next == NULL) return head;

    // 递归调用，翻转第二个节点开始往后的链表
    ListNode* last = reverseList(head->next);
    // 翻转头节点与第二个节点的指向
    head->next->next = head;
    // 此时的 head 节点为尾节点，next 需要指向 NULL
    head->next = NULL;
    return last;
  }
};