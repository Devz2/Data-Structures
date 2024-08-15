#include <iostream>
using namespace std;
int max_arr(int arr[],int n)
{
    int m=0;
    for (int i=0;i<n-1;i++)
    {
		int j,x=1;

		for (j=i;j<n;j++)
        {
			if(arr[j+1]==arr[j]+1)
			{
				x++;
            }
			else{
				break;
			}
		}
		m=max(m,x);
	}
	return m;
}
int main()
{
	int n=14;
	int arr[]= {1,3,4,2,3,4,5,6,2,3,5,6,7,8};
	cout<<max_arr(arr,n);
	return 0;
}
