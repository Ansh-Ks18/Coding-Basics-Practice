#include <iostream>
using namespace std;

int main() {
    int n = 5;
    char z = 'A';

    for (char i = 'A'; i < n; i++) { // Mistake 1: 'i' is a char, but 'n' is an int.
        // Print leading spaces
        for (int j = n - 1; j > i; j--) { // Mistake 2: 'i' is a char, but 'j' is an int.
            cout << " ";
        }
        // Print numbers in descending order
        for (char j = 'A'; z >= j; j++) {
            cout << i; 
        }
        z += 2; // This will cause 'z' to increase by 2 ASCII values, which may not be intended.
        cout << endl; // move to the next line after printing each row
    }

    return 0;
}
