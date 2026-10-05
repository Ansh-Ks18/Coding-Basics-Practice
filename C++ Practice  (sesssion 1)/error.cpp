#include <iostream>
#include <stdexcept>

using namespace std;

class A {
    int serverLoad;
public:
    A() : serverLoad(0) {} // Initialize server load to 0

    void result(int a, int b) {
        serverLoad++; // Increment server load
        try {
            if (a < 0) {
                throw runtime_error("A is negative");
            }
            // Assuming some computation here
            cout << "Result: " << a + b << endl;
        }
        catch (const runtime_error& e) {
            cout << "Exception: " << e.what() << endl;
        }
    }

    void result2(int c, int d) {
        serverLoad++; // Increment server load
        try {
            if (c > 10) {
                throw bad_alloc();
            }
            int *ptr = new int[10];
            // Assuming some computation here
            cout << "Result2: " << (c + d) << endl;
            delete[] ptr; // Always free allocated memory
        }
        catch (const bad_alloc&) {
            cout << "Not enough memory" << endl;
        }
        catch (...) {
            cout << "Other Exception" << endl;
        }
    }

    int getServerLoad() const {
        return serverLoad;
    }
};

int main() {
    int t;
    cin >> t;
    A o;
    for (int i = 0; i < t; ++i) {
        int a, b;
        cin >> a >> b;
        if (i == 0) {
            o.result(a, b); // First test case
        } else {
            o.result2(a, b); // Second test case
        }
    }
    cout << o.getServerLoad() << endl; // Print server load
    return 0;
}
