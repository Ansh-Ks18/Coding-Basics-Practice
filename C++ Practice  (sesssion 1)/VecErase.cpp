#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Read the number of elements in the vector
    int n;
    cin >> n;

    // Initialize the vector and read the elements
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    // Read the position to erase (1-based index)
    int pos;
    cin >> pos;

    // Read the range to erase (1-based inclusive of a and exclusive of b)
    int a, b;
    cin >> a >> b;

    // Erase element at position pos (1-based index)
    if (pos >= 1 && pos <= n) {
        v.erase(v.begin() + pos - 1);
    }

    // Adjust a and b to 0-based indices and erase the range [a, b)
    if (a >= 1 && b >= a && b <= n) {
        v.erase(v.begin() + a - 1, v.begin() + b - 1);
    }

    // Output the size of the modified vector
    cout << v.size() << endl;

    // Output the elements of the modified vector
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
