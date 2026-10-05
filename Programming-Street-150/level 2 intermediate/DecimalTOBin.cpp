#include <iostream>
#include <cmath>
using namespace std;

// Approach 1: Using an array
void DecimalToBinary(int n) {
    int arr[32];
    int i = 0;

    // Extract binary bits and store in array
    while (n > 0) {
        int result = n % 2;
        arr[i] = result;
        n = n / 2;
        i++;
    }

    // Print binary in reverse order
    cout << "Binary representation (Array approach): ";
    for (int j = i - 1; j >= 0; j--) {
        cout << arr[j];
    }
    cout << endl;
}

// Approach 2: Using arithmetic and math
int Decimal2(int n) {
    int i = 0;
    int result = 0;

    // Compute binary using powers of 10
    while (n > 0) {
        int bit = n % 2; // Extract last binary bit
        result += bit * pow(10, i); // Add the bit at the correct position
        n /= 2; // Divide the number by 2
        i++;
    }

    return result;
}

// Approach 3: Using bitwise operations (fixed width 32 bits)
void bitapproach(int n) {
    cout << "Binary representation (Bitwise fixed width): ";
    for (int i = 31; i >= 0; i--) {
        cout << ((n >> i) & 1); // Extract each bit using bitwise operations
    }
    cout << endl;
}

// Approach 4: Using bitwise operations in a loop
void bit2approach(int n) {
    int i = 0;
    int result = 0;

    while (n > 0) {
        int bit = (n % 2) & 1; // Extract the last binary bit
        result += bit * pow(10, i); // Add the bit at the correct position
        n = n >> 1; // Move to the next bit (divide by 2 using bitwise shift)
        i++;
    }

    cout << "Binary representation (Bitwise loop): " << result << endl;
}

int main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    // Approach 1
    DecimalToBinary(n);

    // Approach 2
    cout << "Binary representation (Math approach): " << Decimal2(n) << endl;

    // Approach 3
    bitapproach(n);

    // Approach 4
    bit2approach(n);

    return 0;
}
