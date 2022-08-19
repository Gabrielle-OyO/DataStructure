

LinkList S(LinkList L1, LinkList L2) {
  int len1 = Length(L1), len2 = Length(L2), dist;
  LinkList longList, shortList;
  if (len1 > len2) {
    longList = L1->next;
    shortList = L2->next;
    dist = len1 - len2;
  } else {
    longList = L2->next;
    shortList = L1->next;
  }
  while (dist--) longList = longList->next;
  while (longList != NULL) {
    if (longList == shortList)
      return longList;
    else {
      longList = longList->next;
      shortList = shortList->next;
    }
  }
  return NULL;
}