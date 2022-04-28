#include <iostream>
using namespace std;

int sortzerone(int arr[], int n){
    int one =0,zero=0 ,two=0;
    for(i=0; i<n; i++){
        if(arr[i]==0)
            zero++;
        else if(arr[i]==1)
            one++;
        else
            two++; 
    }
    int i=0;
    while(zero--){
        arr[i] =0;
        i++;
    }
    while(one--){ 
        arr[i] =1;
        i++;
    }
    while(){
        
    }
    
}