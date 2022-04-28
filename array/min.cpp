#include <iostream>
using namespace std;

int getmin(int arr[], int n) {
    int ans =INT_MAX;
    for(int i = 0; i < n; i++){
        ans = min(ans , arr[i]);
    }
    return ans;
}

int main(){
    int arr[] = {3,5,6,9,10,11,12};
    cout << "Minumum is " << getmin(arr,7) <<endl;
    return 0;
}