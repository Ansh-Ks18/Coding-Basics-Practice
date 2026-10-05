#include <iostream>
#include <string>

using namespace std;

int main() {
    int lower, upper;

    // Get inpsut for the lower and upper bounds
    
    cin >> lower >> upper;

    // Validate input (both numbers must be positive)
    if (lower <= 0 || upper <= 0) {
        cout << "Error: Both numbers must be positive." << endl;
        return 1; // Indicate error
    }

    // Loop through each number in the inclusive interval
    for (int num = lower; num <= upper; ++num) {
        if (num <= 9) {
            // Print English representation for numbers 1 to 9
            switch (num) {
             case 1: cout << "one" << endl; break;
                case 2: cout << "two" << endl; break;
                case 3: cout << "three" << endl; break;
                case 4: cout << "four" << endl; break;
                case 5: cout << "five" << endl; break;
                case 6: cout << "six" << endl; break;
                case 7: cout << "seven" << endl; break;
                case 8: cout << "eight" << endl; break;
                case 9: cout << "nine" << endl; break;
            }
        } else {
            // For numbers greater than 9, print even or odd
            if (num % 2 == 0) {
                cout << "even" << endl;
            } else {
                cout << "odd" << endl;
            }
        }
    }

    return 0;
}
