#include<iostream>
using namespace std;
typedef int ElemType;
typedef struct LNode
{
    ElemType data;
    struct LNode *next;
}LNode,*LinkList;
bool InitLink(LinkList &L);
void LinkInsert(LinkList &L);
void LinkPrint(LinkList L);
bool MoveMin(LinkList &L);
bool InitLink(LinkList &L)
{
    L=new LNode;
    if(!L)
        return false;
    L->next=NULL;
    return true;
}
void LinkInsert(LinkList &L)
{
    int n;
    LinkList s,r;
    r=L;
    cout<<"Please input the LinkList number:"<<endl;
    cin>>n;
    cout<<"Please input number in order:"<<endl;
    while(n--)
    {
        s=new LNode;
        cin>>s->data;
        r->next=s;
        r=s;
    }
    r->next=NULL;

}
void LinkPrint(LinkList L)
{
    while(L->next!=NULL)
    {
        cout<<L->next->data<<"\t";
        L=L->next;
    }
    cout<<endl;
}
bool MoveMin(LinkList &L)
{
    LNode *p,*ptrmin,*q;
    if(L->next==NULL)
        return false;
    p=L->next;
    ptrmin=L;
    while(p->next!=NULL)
    {
        if(p->next->data<ptrmin->next->data)
            ptrmin=p;
        p=p->next;
    }
    q=ptrmin->next;
    ptrmin->next=q->next;
    q->next=L->next;
    L->next=q;

    return true;
}
int main()
{
    LinkList L;
    InitLink(L);
    LinkInsert(L);
    LinkPrint(L);
    MoveMin(L);
    LinkPrint(L);

    return 0;

}
