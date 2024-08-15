#include<iostream>
using namespace std;
int main()
{
int a[10],i,n,j,shift=0;
cout<<"enter the size:";
cin>>n;
cout<<"enter the elements:";
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"after removing multiples of 3:";
for(i=0;i<n;i++)
{
if(a[i]%3!=0)
{
   cout<<a[i];
}
}
}
