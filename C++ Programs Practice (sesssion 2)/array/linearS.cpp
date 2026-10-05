#include<iostream>
using namespace std;

int main() {
    int arr[1000]; // Array to hold up to 1000 elements
    int t; // Target element to search for
    bool found = false; // Boolean variable to track if the target is found

    // Input elements
    cout << "Enter 5 elements: ";
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    // Display the elements
    cout << "The elements are: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Input the target element to search for
    cout << "Enter the target element: ";
    cin >> t;

    // Search for the target element
    for(int i = 0; i < 5; i++) {
        if(arr[i] == t) {
            cout << "The index of the target element is: " << i << endl;
            found = true; // Mark the element as found
            break; // Exit the loop as we have found the target
        }
    }

    // Check if the element was not found
    if(!found) {
        cout << "The element is not found." << endl;
    }

    return 0;
}
