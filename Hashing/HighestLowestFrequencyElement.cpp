// Find the highest/Lowest frequency element

#include <iostream>
#include <map>
using namespace std;

int main() {

    int arr[] = {1, 2, 1, 3, 2, 1};
    int n = 6;

    // Map mein element aur uski frequency store karenge
    // Key = element
    // Value = frequency
    map<int, int> mpp;

    // Array ke har element ki frequency count karo
    for (int i = 0; i < n; i++) {

        // arr[i] ki frequency ko 1 se increase karo
        mpp[arr[i]]++;
    }

    // Highest frequency find karne ke liye
    // initially highest frequency 0 rakhenge
    int highest = 0;

    // Lowest frequency find karne ke liye
    // initially lowest ko n rakhenge
    int lowest = n;

    int highestElement;
    int lowestElement;

    // Map ke har element ko check karo
    for (auto it : mpp) {

        // it.first = element
        // it.second = us element ki frequency

        // Agar current frequency highest se zyada hai
        if (it.second > highest) {

            // Highest frequency update karo
            highest = it.second;

            // Us element ko store karo
            highestElement = it.first;
        }

        // Agar current frequency lowest se kam hai
        if (it.second < lowest) {

            // Lowest frequency update karo
            lowest = it.second;

            // Us element ko store karo
            lowestElement = it.first;
        }
    }

    // Highest frequency element print karo
    cout << "Highest frequency element: "
         << highestElement << endl;

    cout << "Frequency: "
         << highest << endl;

    // Lowest frequency element print karo
    cout << "Lowest frequency element: "
         << lowestElement << endl;

    cout << "Frequency: "
         << lowest << endl;

    return 0;
}