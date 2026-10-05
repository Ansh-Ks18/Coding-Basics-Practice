#include <iostream>
using namespace std;

int main() {
    int n = 5; // number of rows
    
    for (int i = 1; i <= n; i++) { // loop for rows
        // Print leading spaces
        for (int j = 5; j >= 1 ; j--) {
                        cout << j;
        }
        // Move to the next line after printing each row
        cout << endl;
    }

    return 0;
}
