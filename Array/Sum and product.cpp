#include<iostream>
using namespace std;
int main()
{
    int a[10],n,sum=0,pro=1;
    cout<<"Enter the no of elements in arr:";
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
    sum+=a[i];
    pro*=a[i];
    }
    cout<<"sum:"<<sum<<endl;
    cout<<"Product:"<<pro;
    return 0;
}
