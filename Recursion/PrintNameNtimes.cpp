/*
Logic:
Input: n = 5

Function initially:
f(1, 5)

Ab har call mein
i <= n
   ↓
"Saksham" print
   ↓
f(i + 1, n)


So calls kuch aise hongi:

f(1,5) → Saksham
   ↓
f(2,5) → Saksham
   ↓
f(3,5) → Saksham
   ↓
f(4,5) → Saksham
   ↓
f(5,5) → Saksham
   ↓
f(6,5)
   ↓
6 > 5 → return
*/



#include <iostream>
using namespace std;

// Function i se start hoga aur n tak name print karega
void f(int i, int n) {

    // Base Case:
    // Agar i, n se bada ho gaya,
    // to recursion ko stop kar do
    if (i > n) {
        return;
    }

    // Current call mein "Saksham" print hoga
    cout << "Saksham\n";

    // Recursive Call:
    // i ko 1 se increase karke function dobara call hoga
    f(i + 1, n);
}

int main() {

    int n;

    // User se n input lenge
    cin >> n;

    // Recursion ko 1 se start karenge
    f(1, n);

    return 0;
}