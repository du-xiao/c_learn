#include<iostream>
#include<stack>
using namespace std;
void EnQueue(stack<int> &s1,stack<int> &s2,int k);
int DeQueue(stack<int> &s1,stack<int> &s2);
bool Queue_empty(stack<int> s1,stack<int> s2);
bool Queue_empty(stack<int> s1,stack<int> s2)
{
    if(s1.empty()&&s2.empty())
        return true;
    else
        return false;
}
void EnQueue(stack<int> &s1,stack<int> &s2,int k)
{
    s1.push(k);
}
int DeQueue(stack<int> &s1,stack<int> &s2)
{
    int a,b;
    if(s2.empty())
    {
        while(!s1.empty())
        {
            b=s1.top();
            s2.push(b);
            s1.pop();
        }
    }
    if(s2.empty())
        cout<<"Empty!!!"<<endl;
    a=s2.top();
    s2.pop();
    return a;
}
int main()
{
    stack<int> s1,s2;
    int n,k;

    cout<<"Please input size n:"<<endl;
    cin>>n;
    while (n--)
    {
        cin>>k;
        EnQueue(s1,s2,k);
    }
    /*while(!s1.empty())
    {
        cout<<s1.top()<<"\t";
        s1.pop();
    }*/
    while(!Queue_empty(s1,s2))
{
     cout<<DeQueue(s1,s2)<<"\t";
}
    return 0;
}
