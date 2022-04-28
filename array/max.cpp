#include <iostream>
using namespace std;

int getmax(int arr[], int n) {
    int ans =INT_MIN;
    for(int i = 0; i < n; i++){
        ans = max(ans , arr[i]);
    }
    return ans;
}

int main(){
    int arr[] = {3,5,6,9,10,11,12};
    cout << "Maximum is " << getmax(arr,7) <<endl;
    return 0;
}