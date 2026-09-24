// Two Pointers

#include <iostream>
using namespace std;

void reverse(int arr[], int i, int j) {

    if (i >= j) {
        return;
    }

    swap(arr[i], arr[j]);

    reverse(arr, i + 1, j - 1);
}

/*
if wanted to print

void printArray(int arr[], int i, int n) {
    if (i >= n) {
        return;
    }
    cout << arr[i] << " ";
    printArray(arr, i + 1, n);
}
*/ 


int main() {

    int arr[] = {1, 2, 5, 3, 2};

    reverse(arr, 0, 4);
    // printArray(arr, 0, 5);

    return 0;
}

// One Pointer

#include <iostream>
using namespace std;

void f(int i, int arr[], int n) {

    // Base condition
    // Jab i middle tak pahunch jaye,
    // array reverse ho chuka hai.
    if (i >= n / 2) {
        return;
    }

    // First element ko last element se swap karo
    swap(arr[i], arr[n - i - 1]);

    // Next pair ke liye i ko increase karo
    f(i + 1, arr, n);
}

int main() {

    int n;
    cin >> n;

    int arr[n];

    // Array input
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Reverse array using recursion
    f(0, arr, n);

    // Print reversed array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}