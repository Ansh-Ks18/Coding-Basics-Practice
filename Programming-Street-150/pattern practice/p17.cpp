#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        for (int j = n; j>i; j--) {
            cout<<" .";
        }
 char c = 'A';
        for (int j = 0; j <= i; j++) {
            cout << c;
            c++;
        }

  c -= 2; // Adjust to print the previous character after increment
        for (int j = 0; j < i; j++) {
            cout << c;
            c--;
        }
        cout  << endl;// code here
    }
    
    return 0;
}