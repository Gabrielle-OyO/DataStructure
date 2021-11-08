
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
//读入
Polynomial ReadPoly()
{
    Polynomial P,Rear,t;
    int c,e,N;
    scanf("%d",&N);
    P=(Polynomial)malloc(sizeof(struct PolyNode));
    P->link=NULL;
    Rear=P;
    while(N--)
    {
        scanf("%d %d",&c,&e);
        Attach(c,e,&Rear);
    }
    t=P;P=P->link;free(t);
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