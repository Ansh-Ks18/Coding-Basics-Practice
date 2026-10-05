#include <iostream>
#include <string>
#include <cctype> // For isdigit function
using namespace std;

// Function to validate the phone number
bool isValid(string num) {
    // Check if the length is exactly 10
    if (num.length() != 10) {
        return false;  // Invalid length
    }

    // Check if the number contains only digits
    for (char ch : num) {
        if (!isdigit(ch)) {
            cout << "\nInvalid character detected: " << ch << endl;
            return false;  // Non-digit character found
        }
    }

    return true;
}

// Function to take user input and validate it
string getPhoneNumber() {
    string num;
    while (true) {
        cout << "Enter a 10-digit phone number: ";
        cin >> num;  // Get input from the user

        if (isValid(num)) {
            cout << "You entered a valid phone number: " << num << endl;
            break;  // Exit the loop if the number is valid
        } else {
            cout << "Invalid phone number. Please try again.\n";
        }

        // Clear and ignore the invalid input to avoid errors
        cin.clear();
        cin.ignore(5000, '\n');
    }

    return num;
}

int main() {
    // Getting the valid phone number
    string phoneNumber = getPhoneNumber();

    // Final message
    cout << "Phone number " << phoneNumber << " is successfully validated.\n";
    
    return 0;
}
