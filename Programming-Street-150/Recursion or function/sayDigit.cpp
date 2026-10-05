#include <iostream>
#include <vector>
using namespace std;

int count(int n) {
    int count = 0;
    while (n > 0) {
        n /= 10;
        count++;
    }
    return count;
}

int digit(int &n) {
    int d = n % 10;
    n /= 10;
    return d;
}

int main() {
    int n;
    cin >> n;

    int s = count(n);  // Get the number of digits

    // Create a vector to store digits
    vector<int> digits;

    // Store the digits in the vector
    for (int i = 0; i < s; i++) {
        int d = digit(n);  // Extract the digit
        digits.push_back(d);  // Add it to the vector
    }

    // Now print the digits in the correct order
    for (int i = s - 1; i >= 0; i--) {
        int d = digits[i];
        switch (d) {
            case 1:
                cout << "one ";
                break;
            case 2:
                cout << "two ";
                break;
            case 3:
                cout << "three ";
                break;
            case 4:
                cout << "four ";
                break;
            case 5:
                cout << "five ";
                break;
            case 6:
                cout << "six ";
                break;
            case 7:
                cout << "seven ";
                break;
            case 8:
                cout << "eight ";
                break;
            case 9:
                cout << "nine ";
                break;
            case 0:
                cout << "zero ";
                break;
        }
    }

    return 0;
}
