#include <iostream>
using namespace std;

void fun(int &n) {
    if (n % 2 == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
        int sum = 0;
        for (int i = 1; i <= n; i += 2) { 
            sum += i; 
        }
        cout << "The sum of odd numbers is: " << sum << endl;
    }
}

int main() {
    int n;
    cin >> n;

    cout << "The Number is: ";
    fun(n);

    return 0;
}
