#include<iostream>
using namespace std;

void printpattern(int n){
    for(int row=1; row<=n; row++){

        if(row == 1){
            cout << "*" << endl; 
        }
        else{
            cout << "* ";

            //logic
            int cnt=1;
            // increasing order printing
            while(cnt != row-1){
            cout << cnt << " ";
            cnt++;
            }

            // dereasing order printing
            while(cnt > 0){
            cout << cnt << " ";
            cnt--; 
            }

            cout << " *"<< endl;
        }
    }
    for(int row=1; row<=n-1; row++){
        if(row == n-1){
            cout << "*" << endl; 
        }
        else{
            cout << "* ";

            //logic
            int cnt=1;
            // increasing order printing
            while(cnt != n-row-1){
            cout << cnt << " ";
            cnt++;
            }

            // dereasing order printing
            while(cnt > 0){
            cout << cnt << " ";
            cnt--; 
            }

            cout << " *"<< endl;
        }
    }
}

/*


*
* 1  *
* 1 2 1  *        
* 1 2 3 2 1  *    
* 1 2 3 4 3 2 1  *
* 1 2 3 4 5 4 3 2 1  *
* 1 2 3 4 5 6 5 4 3 2 1  *
* 1 2 3 4 5 4 3 2 1  *
* 1 2 3 4 3 2 1  *
* 1 2 3 2 1  *
* 1 2 1  *
* 1  *
*


*/









int main(){
    int n =7;
    printpattern(n);
    return 0;
}