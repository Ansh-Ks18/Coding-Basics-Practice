#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two positive integers: ";
    cin >> a >> b;

    if (a > 0 && b > 0) {
       
        while (b != 0) {
            int remainder = a % b;
            a = b;
            b = remainder;
        }
        cout << "The GCD is: " << a << endl;
    } else {
        cout << "Invalid input. Both numbers must be positive." << endl;
    }

    return 0;
}
