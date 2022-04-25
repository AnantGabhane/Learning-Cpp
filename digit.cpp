#include<iostream>
using namespace std;

int main(){
    n = 137;
    while(n!=0){
        int digit = n%10;
        cout << "digit: " << digit << endl;
        n = n/10;
    }
    cout << "Done" << endl;
    
    return 0;
}