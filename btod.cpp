#include<iostream>
using namespace std;

int main(){
    int n = 5;
    while(n!=0){
        int bit = n & 1;
        cout << "bit:" << bit << endl;
        n= n>>1;
    }
    cout << "Done" << endl;
    
    return 0;
}