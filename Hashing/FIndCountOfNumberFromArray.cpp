// Find the count of a numebr from an array

// Number Hashing

#include <iostream>
using namespace std;

int f(int num, int arr[], int n) {

    int count = 0;

    for (int i = 0; i < n; i++) {

        if (arr[i] == num) {
            count = count + 1;
        }
    }

    return count;
}

int main() {

    int arr[] = {1, 2, 1, 3, 2};
    int n = 5;

    cout << f(2, arr, n);

    return 0;
}


// Character Hashing

#include <iostream>
using namespace std;

int f(char ch, char arr[]) {

    int count = 0;

    for (int i = 0; i < 5; i++) {

        if (arr[i] == ch) {
            count = count + 1;
        }
    }

    return count;
}

int main() {

    char arr[5] = {'a', 'b', 'a', 'c', 'b'};

    cout << f('b', arr);

    return 0;
}