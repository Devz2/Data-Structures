#include <iostream>
using namespace std;

int main() {
    int a[7] = {1, 2, 3, 4, 5, 6, 7};
    for (int i=6;i>=2;i--){
        a[i]=a[i-1];
    }
    a[2]=10;

    for (int i=4;i<6;i++){
        a[i]=a[i+1];
    }
    for (int i=0;i<6;i++)
        {
        cout<<a[i]<<" ";
    }
}
