/*

#include<iostream>
using namespace std;
void printPattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    printPattern(n);
    return 0;
}

*/

// if in a question they asked for both rows and columns to be taken from user then we can use below code

#include<iostream>
using namespace std;

void printPattern(int rows, int cols){
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=cols;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int rows, cols;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    cout<<"Enter the number of columns: ";
    cin>>cols;
    printPattern(rows, cols);
    return 0;
}
