#include <iostream>
using namespace std;

int main() {
    int n = 5; // number of rows
    int i,j;
    for (int i = 1; i <= n; i++) { // loop for rows
        // Print leading spaces
        for(int j=1;j<=5;j++){
            if(i==j){
                cout<<"*";
            }
            
            else{
                cout<<"O";
            }
        }

        // Move to the next line after printing each row
        cout << endl;
    }

    return 0;
}