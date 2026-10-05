#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v(5, 0); // Initialize vector with 5 elements, all set to 0

    // Print the elements of the vector
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    v.resize(10,1); // Resize the vector to 10 elements

    // Print the elements of the resized vector
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}