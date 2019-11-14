#include<iostream>
using namespace std;
int Find_same(int a[],int b[],int n,int m);

int Find_same(int a[],int b[],int n,int m)
{
    int i=0,j=0;
    while(i<n&&j<m)
    {
        if(a[i]==b[j])
            return i+1;
        else if(a[i]<b[j])
            i++;
        else
            j++;
    }

    return 0;
}
int main()
{
    int a[]={1,5,9,11,55,77};
    int b[]={2,4,7,13,55,99,100,155};
    int a_size,b_size;

    a_size=sizeof(a)/sizeof(a[0]);
    b_size=sizeof(b)/sizeof(b[0]);
    cout<<Find_same(a,b,a_size,b_size)<<endl;

    return 0;
}
