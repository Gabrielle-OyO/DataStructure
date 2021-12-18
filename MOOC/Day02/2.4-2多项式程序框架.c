
//框架
int main()
{
    Polynomial P1,P2,PP,PS;

    P1=ReadPoly();
    P2=ReadPoly();
    PP=Mult(P1,P2);
    PrintPoly(PP);
    PS=Add(P1,P2);
    PrintPoly(PS);
    return 0;
}
//读入  指数递降
Polynomial ReadPoly()
{
    Polynomial P,Rear,t;
    int c,e,N;
    scanf("%d",&N);
    P=(Polynomial)malloc(sizeof(struct PolyNode));
    P->link=NULL;//构造空结点
    Rear=P;
    while(N--)
    {
        scanf("%d %d",&c,&e);
        Attach(c,e,&Rear);
    }
    t=P;P=P->link;free(t);//删除临时空结点
    return P;
}

void Attach(int c,int e,Polynomial *pRear)
{
    Polunomial P;
    P=(Polynomial)malloc(sizeof(struct PolyNode));
    P->coef=c;
    P->expon=e;
    P->link=NULL;
    (*pRear)->link=P;
    *pRear=P;
}

//多项式相加
Polynomial Add(Polynomial P1,Polunomial P2)
{

    t1=P1;t2=P2;
    P=(Polynomial)malloc(sizeof(struct PolyNode));
    P->link=NULL;
    Rear=P;
    while(t1&&t2)
    {
        if(t1->expon==t2->expon)
        {

        }
        else if(t1->expon>t2->expon)
        {

        }else
        {

        }
    }
    while(t1)
    {

    }
    while(t2)
    {

    }
    return P;
}

//多项式相乘
Polynomial Mult(Polynomial P1,Polynomial P2)
{
    Polynomil P,Rear,t1,t2,t;
    int c,e;
    if(!P1||!P2) return NULL;
    t1=P1;t2=P2;
    P=(Polynomial)malloc(sizeof(struct PolyNode));
    P->link=NULL;
    Rear=P;
    while(t2)
    {
        //将乘法运算转换为加法运算
        Attach(t1->coef*t2->coef,t1->expon+t2->expon,&Rear);
        t2=t2->link;
    }
    t1=t1->link;
    while(t1)
    {
        t2=P2;Rear=P;
        while(t2)
        {
            e=t1->expon+t2->expon;//指数相加
            c=t1->coef*t2->coef;//系数相乘
            while(Rear->link&&Rear->link->expon>e)
                Rear=Rear->link;
            if(Rear->link&&Rear->link->expon==e)
            {
                if(Rear->link->coef+c)
                    Rear->link->coef+=c;
                else
                {
                    t=Rear->link;
                    Rear->link=t->link;
                    free(t);
                }
            }else{
                t=(Polynomial)malloc(sizeof(struct PolyNode));
                t->coef=c;
                t->expon=e;
                t->link=Rear->link;
                Rear->link=t;
                Rear=Rear->link;
            }
            t2=t2->link;
        }
        t1=t1->link;
    }
    t2=P;
    P=P->link;
    free(t2);
    return P;
}

//多项式输出
void PrintPoly(Polynomial P)
{
    int flag=0;
    if(!P){printf("0 0\n");return;}
    while(P)
    {
        if(!flag)
            flag=1;
        else
            printf(" ");
        printf("%d %d",P->coef,P->expon);
        P=P->link;
    }
    printf("\n")
}