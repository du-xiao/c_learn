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
void Del_same(LinkList &L);
void Del_same(LinkList &L)
{
    LNode *p,*q;
    p=L->next;
    while(p->next!=NULL)
    {
        if(p->data==p->next->data)
        {
            q=p->next;
            p->next=q->next;
            free(q);
        }
        else
            p=p->next;
    }
}
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

int main()
{
    LinkList L;
    InitLink(L);
    LinkInsert(L);
    LinkPrint(L);
    //MoveMin(L);
    Del_same(L);
    LinkPrint(L);

    return 0;

}
