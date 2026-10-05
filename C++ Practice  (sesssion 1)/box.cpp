#include <iostream>
using namespace std;

class Box {
private:
    int l, b, h;

public:
    // Default constructor
    Box() : l(0), b(0), h(0) {}

    // Parameterized constructor
    Box(int length, int breadth, int height) : l(length), b(breadth), h(height) {}

    // Copy constructor
    Box(const Box& B) {
        l = B.l;
        b = B.b;
        h = B.h;
    }

    // Member functions
    int getLength() const {
        return l;
    }

    int getBreadth() const {
        return b;
    }

    int getHeight() const {
        return h;
    }

    long long CalculateVolume() const {
        return static_cast<long long>(l) * b * h;
    }

    // Overload the < operator for comparing two Box objects
    bool operator<(const Box& other) const {
        if (l < other.l) {
            return true;
        } else if (l == other.l && b < other.b) {
            return true;
        } else if (l == other.l && b == other.b && h < other.h) {
            return true;
        } else {
            return false;
        }
    }

    // Overload the << operator for output
    friend ostream& operator<<(ostream& out, const Box& box) {
        out << box.l << " " << box.b << " " << box.h;
        return out;
    }
};

// Function to test various operations on Box objects
void check2() {
    int n;
    cin >> n; // Read the number of operations
    Box temp; // Temporary Box object
    for (int i = 0; i < n; i++) {
        int type;
        cin >> type; // Read operation type
        if (type == 1) {
            cout << temp << endl; // Print current box dimensions
        } else if (type == 2) {
            int l, b, h;
            cin >> l >> b >> h; // Read dimensions
            Box NewBox(l, b, h); // Create new Box with given dimensions
            temp = NewBox; // Assign it to temp
            cout << temp << endl;
        } else if (type == 3) {
            int l, b, h;
            cin >> l >> b >> h; // Read dimensions
            Box NewBox(l, b, h); // Create new Box with given dimensions
            if (NewBox < temp) {
                cout << "Lesser\n"; // Compare new box with temp
            } else {
                cout << "Greater\n";
            }
        } else if (type == 4) {
            cout << temp.CalculateVolume() << endl; // Print volume of temp
        } else if (type == 5) {
            Box NewBox(temp); // Copy constructor
            cout << NewBox << endl;
        }
    }
}

int main() {
    // Create an instance of Box
    Box b1(3, 4, 5);

    // Call member functions on the object
    cout << "Length: " << b1.getLength() << endl;
    cout << "Breadth: " << b1.getBreadth() << endl;
    cout << "Height: " << b1.getHeight() << endl;
    cout << "Volume: " << b1.CalculateVolume() << endl;

    // Test various operations using the check2 function
    check2();

    return 0;
}
