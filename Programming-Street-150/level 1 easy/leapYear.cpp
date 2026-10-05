#include <iostream>
using namespace std;

void fun(int n) {
    if (n % 400 == 0) {
        cout << "The year is a leap year";
    } 
    else if (n % 100 == 0) {
        cout << "The year is not a leap year";
    } 
    else if (n % 4 == 0) {
        cout << "The year is a leap year";
    } 
    else {
        cout << "The year is not a leap year";
    }
}

int main() {
    int n;
    cin >> n;
    fun(n);

    return 0;
}
