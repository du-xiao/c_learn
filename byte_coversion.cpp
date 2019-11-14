#include<iostream>
#include<stack>
using namespace std;
void conversion(int num,int N);
void conversion(int num,int N)
{
    stack<int>  s;
    int e;
    while(num)
    {
        s.push(num%N);
        num/=N;
    }
    while(!s.empty())
    {
        e=s.top();
        s.pop();
        cout<<e;
    }

}
int main()
{
    int num;
    int N;
    cout<<"Please a positive 10-th decimal number:"<<endl;
    cin>>num;
    cout<<"Please input the decimal:"<<endl;
    cin>>N;
    cout<<"The result is:"<<"\t";
    conversion(num,N);

    return 0;
}
