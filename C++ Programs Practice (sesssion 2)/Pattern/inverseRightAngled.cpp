#include <iostream>
using namespace std;

int main() {
 // number of rows
    
    for (int i = 1; i <= 5; i++) { // loop for rows
        // Print leading spaces
        for (int j = 1; j <=i ; j++) {
                        cout << " ";
        }
       
   
        for (int j = 5; j>=i ; j--) {
                        cout << i;
        }
       
        // Move to the next line after printing each row
        cout << endl;
    }

    return 0;
}
