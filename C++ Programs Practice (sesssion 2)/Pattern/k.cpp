#include <iostream>
using namespace std;

int main() {
    int n = 5; // height of the pattern
    int rows = 2 * (n - 1) + 1; // total number of rows for the pattern

    for (int i = 1; i <= rows; i++) { // loop for rows
        for (int j = 1; j <= n; j++) { // loop for columns
            if (j == 1 || (i <= n && j == 6 - i) || (i > n && j == i - 4)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl; // move to the next line after printing each row
    }

    return 0;
}
