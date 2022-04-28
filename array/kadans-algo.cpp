#include <iostream>
using namespace std;

int getMaxsubarray(int arr[], int n){
    int maxSF = INT_MIN;
    int maxEH = 0;

    for(int i=0; i<n; i++){
        maxEH = maxSF + arr[i];
        maxSF = max(maxSF, maxEH);

        if(maxEH < 0)
            maxEH = 0;
    }
    return maxSF;
}

int main() {
    int arr[] = {-2,-3,4,-1,-2,1,5,-3};
    cout << "maximum subarray sum is " << getMaxsubarray(arr,8) <<endl;
    return 0;
}