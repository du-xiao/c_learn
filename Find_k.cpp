#include<iostream>
using namespace std;
int Selection(int a[],int len,int l,int r,int k);
int Partition(int a[],int len,int l,int r);
int Selection(int a[],int len,int l,int r,int k)
{
    if(r>1){
    int i=Partition(a,len,l,r);
    if(i==k-1)
        return a[i];
    else if(i>k-1)
        Selection(a,len,l,i-1,k);
    else
        Selection(a,len,i+1,r,k);
}
   else
    return 0;
}
int Partition(int a[],int len,int l,int r)
{
    int value=a[l];
    while(l<r){
        while(l<r&&a[r]>=value)
            r--;
        a[l]=a[r];
        while(l<r&&a[l]<=value)
            l++;
        a[r]=a[l];
}
    a[l]=value;
    return l;
}
int main()
{
    int a[]={1,2,3,45,54,88,1,5,66,77};
    int len,k,kvalue;

    len=sizeof(a)/sizeof(a[0]);
    cout<<"The array a[]: ";
    for(int i=0;i<len;i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<endl;
    cout<<"Please input the k:"<<endl;
    cin>>k;
    kvalue=Selection(a,len,0,len-1,k);
    cout<<"the k-th value is : "<<kvalue<<endl;

    return 0;
}
