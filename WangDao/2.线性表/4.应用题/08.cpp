

LinkList Search_1st_Common(LinkList L1, LinkList L2) {
  int len1 = Length(L1), len2 = Length(L2);  //计算两个链表的表长
  LinkList longList, sortList;  //分别指向表长较长和较短的链表
  if (len1 > len2) {            // L1表长较长
    longList = L1->next;
    sortList = L2->next;
    dist = len1 - len2;  //表长之差
  } else {               // L2表长较长
    longList = L2->next;
    sortList = L1->next;
    dist = len2 - len1;  //表长之差
  }
  while (dist--)  //表长的链表先遍历到第dist个结点然后同步
    longList = longList->next;
  while (longList != NULL) {   //同步寻找公共结点
    if (longList == sortList)  //找到第一个公共结点
      return longList;
    else {  //继续同步寻找
      longList = longList->next;
      sortList = sortList->next;
    }
  }
  return NULL;
}