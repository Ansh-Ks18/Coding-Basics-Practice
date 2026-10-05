#include <iostream>
using namespace std;

void fun(int &n) {
    if (n % 2 == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
               for (int i = 1; i <= n; i += 2) { 
                cout<<i<<" ";
            
        }
         cout << endl; 
        
    }
}

int main() {
    int n;
    cin >> n;

    cout << "The Number is: ";
    fun(n);

    return 0;
}

