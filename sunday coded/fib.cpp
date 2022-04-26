#include<iostream>
using namespace std;

void printFib(int n){
    int a =-1;
    int b =1;
    // cout << a << " " << b << " ";
    //for(int i=0; i<n-2; i++){
    for(int i=0; i<n; i++){
        int sum=a+b;
        cout << sum << " ";
        a = b;
        b = sum;
    }
}

int main(){
    int n;
    cout << "Enter the value of n: "<< endl;
    cin >> n;
    printFib(n);
    return 0;
}

/*
Enter the value of n: 
7
0 1 1 2 3 5 8 
*/
