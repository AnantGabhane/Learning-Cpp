#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    bool isprime = true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isprime = false;
            break;
        }
    }
        if(isprime = true)
            cout << n << " is prime number" << endl;
        else{
            cout << n <<"is not a prime number" << endl;
        }
    
    return 0;
}

/*
Enter a number: 7
Number is prime number
*/