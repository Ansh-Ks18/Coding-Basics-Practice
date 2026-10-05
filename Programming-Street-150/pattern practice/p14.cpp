#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (char ch = 'A'; ch < 'A' + n; ch++) { // Loop over characters
        for (int j = 0; j <= (ch - 'A'); j++) { // Loop to print each character
            cout << ch << " ";
        }
        cout << endl;
    }

    return 0;
}
