#include <iostream>
using namespace std;

int main() {
    int n = 5;


    for (int i = 0; i < n; i++) { // loop for rows (start from 0 to n-1)
        // Print leading spaces
        for (int j = n - 1; j > i; j--) {
            cout << " ";
        }
        // Print numbers in descending order
        for (int j = i; j >= 0; j--) {
            cout << j; 
        }
 
  for (int j = 1; j <= i; j++) {
            cout << j; 
        }
        cout << endl; // move to the next line after printing each row
    }

    return 0;
}