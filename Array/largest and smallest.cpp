#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int n;
    cout<<"Enter the no of elements in arr:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int l=a[0];
    int s=a[0];
    for(int i=1;i<n;i++)
    {
        if (l<a[i])
        l=a[i];
        if (s>a[i])
            s=a[i];
    }
    cout<<"Largest:"<<l<<endl;
    cout<<"Smallest:"<<s;
    return 0;
}
