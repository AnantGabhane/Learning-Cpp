#include <iostream>
using namespace std;

int getMaxsubarray(int arr[], int n){
    int ans = INT_MIN;
    int maxEH = 0;

    for(int i=0; i<n; i++){
        maxEH = ans + arr[i];
        ans = max(ans, maxEH);

        if(maxEH < 0)
            maxEH = 0;
    }
    return ans;
}

int main() {
    int arr[] = {-2,-3,4,-1,-2,1,5,-3};
    cout << "maximum subarray sum is " << getMaxsubarray(arr,8) <<endl;

    for(int i = 0; i <8; i++) {
        cout << arr[i] <<" ";
    }

    return 0;
}