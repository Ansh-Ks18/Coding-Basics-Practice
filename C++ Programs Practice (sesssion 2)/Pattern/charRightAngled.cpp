#include <iostream>
using namespace std;

int main() {
 // number of rows
    char i,j;
    for (char i = 'A'; i <= 'E'; i++) { // loop for rows
        // Print leading spaces
        for (char j ='A'; j <=i ; j++) {
                        cout << i;
        }
        // Move to the next line after printing each row
        cout << endl;
    }

    return 0;
}
