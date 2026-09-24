/*
Logic:

f() function mein humne base case check kiya hai:

if(i > n)
    return;

Matlab jab i, n se bada ho jayega, function stop ho jayega.

Agar i <= n hai, toh:

cout << i << " ";

current i print hoga.

Phir:

f(i + 1, n);

function ko dobara call karenge aur i ko 1 se increase kar denge.

Example: n = 5
f(1,5) → print 1
   ↓
f(2,5) → print 2
   ↓
f(3,5) → print 3
   ↓
f(4,5) → print 4
   ↓
f(5,5) → print 5
   ↓
f(6,5)
   ↓
6 > 5 → return


Output
1 2 3 4 5

*/

#include <iostream>
using namespace std;

void f(int i, int n) {

    // Base case:
    // Jab i, n se bada ho jayega,
    // recursion stop ho jayegi.
    if (i > n) {
        return;
    }

    // Current value of i print karo
    cout << i << " ";

    // i ko 1 increase karke function dobara call karo
    f(i + 1, n);
}

int main() {

    int n;
    cin >> n;

    // Recursion 1 se start hogi
    f(1, n);

    return 0;
}