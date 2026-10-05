#include <iostream>
using namespace std;

int main() {
    int n;

    // Input the size of the array
    cin >> n;

    // Dynamically allocate memory for the array based on user input
    int* arr =  new int[n];

    // Input values for the array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Display the array in reverse order
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Free dynamically allocated memory
    delete[] arr;

    return 0;
}
