#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 4, 1, 2, 4, 4, 2, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        int count = 0;
        
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        
        if (count > n / 2) {
            cout << "The majority element is: " << arr[i] << endl;
            return 0;
        }
    }

    cout << "No majority element found" << endl;
    return 0;
}
