#include<iostream>
using namespace std;

int firstOccur(int arr[], int t, int n) {
    int low = 0;
    int high = n - 1;
    int start = -1;  // Initialize with -1 indicating not found
    
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(arr[mid] == t) {
            start = mid;
            high = mid - 1;  // Continue searching in the left half
        }
        else if(arr[mid] > t) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return start;  // Return the index of the first occurrence
}

int lastOccur(int arr[], int t, int n) {
    int low = 0;
    int high = n - 1;
    int last = -1;  // Initialize with -1 indicating not found
    
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(arr[mid] == t) {
            last = mid;
            low = mid + 1;  // Continue searching in the right half
        }
        else if(arr[mid] > t) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return last;  // Return the index of the last occurrence
}

int main() {
    int n;
    cin >> n;
    int arr[n]; // Array to hold n elements
    int t; // Target element to search for

    // Input elements
   
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Display the elements
    cout << "The elements are: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Input target element
   
    cin >> t;

    // Call functions and print results
    int first = firstOccur(arr, t, n);
    int last = lastOccur(arr, t, n);

    cout << "First occurrence: " << first << endl;
    cout << "Last occurrence: " << last << endl;

    return 0;
}
