#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

// Function that takes a function pointer as an argument
void operation(int (*func)(int, int), int a, int b) {
    int result = func(a, b);
    cout << "Result: " << result << endl;
}

int main() {
    // Declare function pointers
    int (*func_ptr)(int, int);

    // Assign and use add function
    func_ptr = add;
    cout << "Using add function through pointer: " << func_ptr(10, 5) << endl;

    // Assign and use subtract function
    func_ptr = subtract;
    cout << "Using subtract function through pointer: " << func_ptr(10, 5) << endl;

    // Pass function pointers to another function
    operation(add, 7, 3);  // Output: 10
    operation(subtract, 7, 3);  // Output: 4

    return 0;
}
