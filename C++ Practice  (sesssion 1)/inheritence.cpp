#include <iostream>
#include <string>
#include <exception>

using namespace std;

// Custom exception class for handling short usernames
class BadLengthException : public exception {
private:
    int length; // Store the length of the username
public:
    // Constructor to initialize the length
    BadLengthException(int len) : length(len) {}

    // Method to return the length of the username
    int fungg()const  {
        return length;
    }
};

// Function to check the validity of a username
bool checkUsername(const string& username) {
    int n = username.length();
    
    // If the username is too short, throw an exception
    if (n < 5) {
        throw BadLengthException(n);
    }
    
    // Check for consecutive 'w' characters
    for (int i = 0; i < n - 1; ++i) {
        if (username[i] == 'w' && username[i + 1] == 'w') {
            return false; // Return false if invalid
        }
    }
    
    return true; // Return true if valid
}

int main() {
    int T; // Variable to store the number of test cases
    cin >> T; // Read the number of test cases

    // Loop through each test case
    while (T--) {
        string username;
        cin >> username; // Read the username

        try {
            // Try to check if the username is valid
            bool isValid = checkUsername(username);
            if (isValid) {
                cout << "Valid" << '\n'; // Print "Valid" if the username is valid
            } else {
                cout << "Invalid" << '\n'; // Print "Invalid" if the username has consecutive 'w's
            }
        } catch (BadLengthException& e) {
            // Catch the exception if the username is too short
            cout << "Too short: " << e.fungg() << '\n';
        }
    }

    return 0;
}
