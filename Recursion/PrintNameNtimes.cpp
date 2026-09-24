#include <iostream>
using namespace std;

void f(int i, int n){
    if(i>n){
        return;
    }
    cout << "Saksham\n";
    f(i+1, n);
}

int main(){
    int n;
    cin >> n;
    f(i, n);
    return 0;
}

// Logic: f function() mein humne base case check kiya hai ki agar i n se bada ho jaye to function return kar de. Agar i n se chhota ya barabar hai to hum "Saksham" print karte hain aur phir f function ko i+1 aur n ke saath call karte hain. Is tarah se ye function n times "Saksham" print karega.