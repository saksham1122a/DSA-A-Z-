// Functional Method

#include <iostream>
using namespace std;

// Function to calculate sum using functional recursion
int sum(int n) {

    // Base Case:
    // Jab n = 0 ho jayega,
    // recursion stop ho jayegi.
    if (n == 0) {
        return 0;
    }

    // Current n ko add karo
    // aur remaining numbers ka sum recursively find karo.
    return n + sum(n - 1);

    /*
sum(3)
= 3 + sum(2)
= 3 + 2 + sum(1)
= 3 + 2 + 1 + sum(0)

if (n == 0)
    return 0;

sum(0) = 0

Therefore 
sum(3)
= 3 + 2 + 1 + 0
= 6

Flow:

sum(3)
  ↓
3 + sum(2)
       ↓
    2 + sum(1)
         ↓
      1 + sum(0)
             ↓
           return 0
             ↑
          return 1
             ↑
          return 3
             ↑
          return 6
    */
}

int main() {

    int n = 3;

    // Function ka returned answer print hoga
    cout << sum(n);

    return 0;
}


// Second  Method -- Parameterized Method

#include <iostream>
using namespace std;

// Function to calculate sum using parameterized recursion
void sum(int i, int total) {

    // Base Case:
    // Jab i 0 se chhota ho jaye,
    // iska matlab saare numbers add ho chuke hain.
    if (i < 1) {
        cout << total;
        return;
    }

    // Current number i ko total mein add karo
    // aur i ko 1 se decrease karke function dobara call karo.
    sum(i - 1, total + i);
}

int main() {

    int n = 3;

    // Recursion ko n se start karenge
    // aur total initially 0 hoga.
    sum(n, 0);

    return 0;
}

/*
Maan lo:

n = 3

Hum call karte hain:

sum(3, 0);

Yahan:

i = 3
total = 0

Ab i ko total mein add karenge:

3 + 0 = 3

Phir i ko decrease karke:

sum(2, 3)

Again:

2 + 3 = 5

Phir:

sum(1, 5)

Again:

1 + 5 = 6

Finally:

sum(0, 6)

Ab i < 1 hai, so base case execute hoga aur 6 print hoga.

sum(3, 0)
    ↓
total = 0 + 3 = 3
    ↓
sum(2, 3)
    ↓
total = 3 + 2 = 5
    ↓
sum(1, 5)
    ↓
total = 5 + 1 = 6
    ↓
sum(0, 6)
    ↓
i < 1
    ↓
PRINT 6


*/

