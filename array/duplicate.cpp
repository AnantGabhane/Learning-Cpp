#include <iostream>
using namespace std;

int main() {
    int arr[]={5,4,3,2,2,1};
    int n =6;
        for(int i=0;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(arr[i]==arr[j]){
                cout<<"The duplicate Number is "<<arr[i];
            }
        }
    }
    return 0;   
}

/*
The duplicate Number is 2
*/