#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,5,3,4,5,6,5};
    int s,c=0;
    cout<<"Enter the Search:";
    cin>>s;
    for(int i=0;i<7;i++)
    {
        if (arr[i]==s)
        c+=1;
    }
    cout<<"Count"<<c;
    return 0;
}
