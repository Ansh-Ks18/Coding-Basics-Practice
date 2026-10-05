#include <iostream>
using namespace std;

// Define the struct
struct Person {
    string name;
    int age;
    double height;
};

int main() {
    // Create an instance of the struct
    Person p;

    // Take input for each member of the struct
    cout << "Enter name: ";
    getline(cin, p.name);  // Use getline to handle spaces in the input

    cout << "Enter age: ";
    cin >> p.age;

    cout << "Enter height (in feet): ";
    cin >> p.height;

    // Display the entered information
    cout << "\nEntered details:\n";
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Height: " << p.height << " feet" << endl;

    return 0;
}
