#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    
    // Reading input
    cin >> a >> b;
    
    // Lengths of the strings
    int x1 = a.length();
    int x2 = b.length();
    cout << x1 << " " << x2 << endl; // Output lengths

    // Concatenating the strings
    string x3 = a  + b;
    cout << x3 << endl; // Output concatenated string

    // Swap the first characters of a and b
    swap(a[0], b[0]);
    
    // Print the modified strings
    cout << a << " " << b << endl; // Output the modified strings

    return 0;
}
