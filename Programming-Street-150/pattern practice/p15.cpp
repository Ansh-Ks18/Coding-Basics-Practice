#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Upper part (first half)
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = n; j > i; j--) {
            cout << " ";
        }

        // Print stars for the left half
        for (int j = 0; j < (2 * i - 1); j++) {
            cout << "*";
        }

        // Print leading spaces for the right half (this is symmetric)
        for (int j = n; j > i; j--) {
            cout << " ";
        }
        cout << endl;
    }

    // Lower part (second half)
    for (int i = 1; i <= n; i++) {
        // Print leading spaces for the left half (this should increase with i)
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        // Print stars for the left half (this should decrease with i)
        for (int j = 0; j < (2 * (n - i) - 1); j++) {
            cout << "*";
        }

        // Print leading spaces for the right half (this should also increase with i)
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}
