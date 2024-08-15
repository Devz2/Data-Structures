#include<iostream> 
using namespace std; 
int main() 
{ 
    int arr[]={1,2,3,4,5,4,3,7,5,8,9,2,6}; 
    int n=sizeof(arr)/sizeof(arr[0]); 
    int key,c=0; 
    cout<<"Enter the key value:"; 
    cin>>key; 
    for(int i=0;i<n;i++){ 
        for(int j=i+1;j<n;j++){ 
            for(int k=j+1;k<n;k++){ 
            if(arr[i]+arr[j]+arr[k]==key) 
            c++;
}
}
} 
cout<<"no of Combination:"<<c; 
return 0; 
} 
