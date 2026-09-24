/*
Backtracking is a technique in which a function first moves forward by making recursive calls, and then performs some work while returning back from those calls.

In simple words, pehle recursion andar jaata hai, phir wapas aate time kaam hota hai.



Normal recursion mein hum call se pehle print kar rahe the:

cout << i << " ";
f(i + 1, n);

Isliye:

1 2 3 4 5

directly forward jaate hue print hua.



But backtracking mein:

f(i - 1, n);
cout << i << " ";

pehle recursive call, aur baad mein print.

Isliye printing returning/backtracking phase mein hoti hai.
*/

/*
We want to print:

1 2 3 4 5

But we are starting from 5.

Step 1: Start from n

If n = 5, we call:

f(5, 5);

So i = 5.



if (i < 1) {
    return;
}

This means:

Agar i 1 se chhota ho gaya, toh function ko rok do.

So we keep decreasing i until it becomes 0.

Step 3: Go backwards first

This line:

f(i - 1, n);

means:

Pehle ek step peeche jao.

So:

f(5)
 ↓
f(4)
 ↓
f(3)
 ↓
f(2)
 ↓
f(1)
 ↓
f(0)

At f(0):

if (i < 1)
    return;

So it stops.

Step 4: Now printing starts

Here's the important part:

f(i - 1, n);
cout << i << " ";

Notice that print is after the recursive call.

So f(0) returns to f(1).

Now:

cout << 1;

prints 1.

Then it returns to f(2):

cout << 2;

prints 2.

And so on.

f(0) → return
          ↑
f(1) → print 1
          ↑
f(2) → print 2
          ↑
f(3) → print 3
          ↑
f(4) → print 4
          ↑
f(5) → print 5
Final Output
1 2 3 4 5
*/
#include <iostream>
using namespace std;

void f(int i, int n) {

    // Base case:
    // Jab i, 0 se chhota ho jaye,
    // recursion stop ho jayegi.
    if (i < 1) {
        return;
    }

    // Pehle recursion ke andar ja rahe hain
    f(i - 1, n);

    // Ye line recursion se wapas aate time execute hogi
    // Isi ko backtracking kehte hain
    cout << i << " ";
}

int main() {

    int n;
    cin >> n;

    // n se start karenge
    f(n, n);

    return 0;
}