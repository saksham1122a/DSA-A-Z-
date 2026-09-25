#include<iostream>
using namespace std;

viod fibonacci(int n){
    if(n < = 1){
        return n;    // bhai agar koi value 1 se choti yaan equal hui toh obviously wohi return hogi, becuase it is the sum of last 2 numbers
    }
    return fibonacci(n-1)+fibonacci(n-2);  // sum of previous 2 numbers.
}

int main(){
    int n;
    cin>>n;
    cout<<fibonacci(n);
}