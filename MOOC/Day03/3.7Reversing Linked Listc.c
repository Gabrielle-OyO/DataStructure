

//抽象链表
//有地方存数据、有地方存指针、指向下一节点的地址

//养成一个好习惯  在链表前加一个空的头结点  方便管理和操作链表

Ptr Reverse(Ptr head,int K)
{
    cnt=1;
    new=head->next;
    old=new->next;
    while(cnt<K)
    {
        tmp=old->next;
        old->next=new;
        new=old;
        old=tmp;
        cnt++;
    }
    head->next->next=old;
    return new;
}