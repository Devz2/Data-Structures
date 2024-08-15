#include<iostream>
using namespace std;
int main()
{
    int arr[]={-1,-23,-4,3,5,-7};
    int m;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        if(arr[i]>arr[j])
        {
          m=arr[j];
          arr[j]=arr[i];
          arr[i]=m;
        }
    }
    for(int i=0;i<n;i++)
    cout<<arr[i];
    return 0;
}
