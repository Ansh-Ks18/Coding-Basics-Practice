#include <iostream>
using namespace std;

int main() {
    int n = 5; // number of rows
    
    for (char i = 'A'; i <= 'E'; i++) { // loop for rows
        // Prchar leading spaces
        for (char j = 'E'; j >= i ; j--) {
                        cout << i;
        }
        // Move to the next line after prcharing each row
        cout << endl;
    }

    return 0;
}
