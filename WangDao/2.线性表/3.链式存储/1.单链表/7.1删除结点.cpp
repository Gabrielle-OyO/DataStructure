

//删除第i个结点
p = GetElem(L, i - 1);  //查找删除位置的前驱结点
q = p->next;            //令q指向被删除结点
p->next = q->next;      //将*q结点从链中“断开”
free(q);                //释放结点的存储空间

//删除结点*p
q = p->next;              //令q指向*p的后继结点
p->data = p->next->data;  //和后继结点交换数据域
p->next = q->next;        //将*q的结点从链中“断开”
free(q);  //释放后继结点的存储空间  系统回收LNode型的结点，可二次利用