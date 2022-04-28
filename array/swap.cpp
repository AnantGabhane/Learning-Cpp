#include <iostream>
using namespace std;

void SwapAlternates(int arr[] , int n) {
    int i = 0;
    while(i<n){
        swap(arr[i], arr[i+1]);
    }
    i=i+2; 
}
    


int main() {
    int arr[]={3,5,7,6,9,2,11,6};
    SwapAlternates(arr[], 8);

    for(int i=0; i< 8; i++){
        cout << "Minumum is " << arr[i] << " ";
    }
    return 0;   
}

/* 
2 9 6 7 5 3 
*/