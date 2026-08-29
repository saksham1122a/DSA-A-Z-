#include<iostream>
using namespace std;

void printPattern1(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void printPattern2(int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        printPattern2(n);
    }
}