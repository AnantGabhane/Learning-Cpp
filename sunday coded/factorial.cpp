#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: " <<endl;
    cin >> n;
    int ans = 1;
    for(int i=n;i>=1;i--){
        ans = ans*i;
    }
    cout << "Factorial of " << n << " is " << ans << endl;
    return 0;
}
    
/*
Enter a number: 
5
Factorial of 5 is 120
*/