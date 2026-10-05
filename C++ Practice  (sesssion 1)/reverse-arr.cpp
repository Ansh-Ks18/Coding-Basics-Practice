#include <iostream>
using namespace std;

int main() {
    int arr[10];
    
    // Collecting input
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    // Displaying the collected input
    cout << "The 10 integers are: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;




 // Calculate the size of the array
    int sizearr = sizeof(arr) / sizeof(arr[0]);

    cout << "The size of the array is: " << sizearr << endl;
cout<<"the reverse order is: ";
for(int i=sizearr-1;i>=0;i--){
    cout<< arr[i]<<" ";
}
    return 0;
}
