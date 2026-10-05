#include <iostream>
#include <string>

using namespace std;

class A {
private:
    string username;

public:
    A(const string& un) : username(un) {}

    int display() const {
        return username.length();
    }

    bool check() {
        if (username.length() < 3) {
           
            return false;
        }
        // Loop to check for consecutive 'w' characters
        for (size_t i = 0; i < username.length() - 1; ++i) {
            if (username[i] == 'w' && username[i + 1] == 'w') {
                return false;
            }
        }
        return true;
    }

    void validateAndPrint() {
        if (check()) {
            cout << "Valid" << endl;
        } else if (username.length() < 3) {
            cout << "Too short: " << username.length() << endl;
            // Already handled in the check method
        } else {
            cout << "Invalid" << endl;
        }
    }
};

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        string username;
        cin >> username;

        A user(username); // Create an instance of class A with the username
        user.validateAndPrint(); // Call the validateAndPrint method
    }
    return 0;
}
