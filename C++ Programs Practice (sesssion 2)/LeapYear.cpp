#include <iostream>
using namespace std;

int main() {
    int year;
    // Prompt should be before taking the input
    cout << "Enter the year you want to check if it is a leap year or not: "<<endl;
    cin >> year;

    // Correct leap year logic
    if (year % 4 == 0) {
        if (year % 100 != 0 || year % 400 == 0) {
            cout << year << " is a leap year." << endl;
        } else {
            cout << year << " is not a leap year." << endl;
        }
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}
