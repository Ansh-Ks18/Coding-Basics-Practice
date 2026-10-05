#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "The first " << n << " odd numbers are: ";
    for (int i = 0; i < n; i++) {
        cout << (2 * i + 1) << " ";
    }

    cout << endl;
    return 0;
}
