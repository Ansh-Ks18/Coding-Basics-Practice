#include <iostream>
#include <cmath>
using namespace std;

// Arithmetic Approach
int binaryToDecimal(int n) {
    int result = 0;
    int i = 0;

    while (n > 0) {
        int bit = n % 10;            // Extract the last digit (binary bit)
        result += bit * pow(2, i);   // Add the weighted value of the bit
        n /= 10;                     // Remove the last digit
        i++;                         // Move to the next power of 2
    }
    return result;
}

// Bitwise Approach
int bitApproach(int n) {
    int result = 0;
    int i = 0;

    while (n > 0) {
        int bit = n & 1;             // Extract the least significant bit
        result += bit * (1 << i);    // Add the weighted value of the bit
        n = n >> 1;                  // Right shift to process the next bit
        i++;                         // Move to the next power of 2
    }
    return result;
}

int main() {
    int n;
    cout << "Enter a binary number (e.g., 1011): ";
    cin >> n;

    cout << "Decimal (Arithmetic Approach): " << binaryToDecimal(n) << endl;

    cout << "Enter another binary number (as an actual number): ";
    cin >> n;

    cout << "Decimal (Bitwise Approach): " << bitApproach(n) << endl;

    return 0;
}
