#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;
    
    if (isdigit(ch)) {
        cout << ch << " is a digit" << endl;
    } else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
               ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        cout << ch << " is a vowel" << endl;
    } else if (isalpha(ch)) {
        cout << ch << " is a consonant" << endl;
    } else {
        cout << ch << " is not an alphabetic character" << endl;
    }

    return 0;
}
