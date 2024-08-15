#include<iostream> 

using namespace std; 

int main(){ 

    int arr[]={6,8,2,9,5,1,4,3}; 

    int n=sizeof(arr)/sizeof(arr[0]); 

    int sum=0,temp; 

    for(int i=0;i<n;i++){ 

        for(int j=i+1;j<n;j++){ 

            if(arr[i]>arr[j]){ 

                temp=arr[i]; 

                arr[i]=arr[j]; 

                arr[j]=temp; //Sorting the array

            } 

            } 

    } 

    for(int i=0;i<n/2;i++) 

    sum+=arr[i]*arr[n-i-1]; 

    cout<<"Minimum sum of product of consecutive pair elements:"<<sum; 

    return 0; 

} 
