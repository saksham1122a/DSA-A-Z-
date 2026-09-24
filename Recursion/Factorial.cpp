#include <iostream>
using namespace std;

// Function to calculate factorial using recursion
int fact(int n) {

    // Base Case:
    // 0! = 1
    if (n == 0) {
        return 1;
    }

    // Current n ko previous factorial se multiply karo
    return n * fact(n - 1);
}

int main() {

    int n = 3;

    cout << fact(n);

    return 0;
}