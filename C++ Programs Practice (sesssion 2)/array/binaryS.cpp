#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n]; // Array to hold up to n00 elements
    int t; // Target element to search for
bool found= false;
int mid;

    // Input elements
    cout << "Enter the  elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Display the elements
    cout << "The elements are: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Enter the target element: ";
    cin >> t;

int low = 0;
    int high = n - 1;

  while(low <= high) {
             int mid=low + (high - low) / 2;
        if(arr[mid]==t ){
               cout<<mid<<endl;
           found = true;
            break;
        }
       else if(arr[mid]<t){
         low= mid+1;
       }
        else if(arr[mid]>t){
           high= mid-1;
       }
    }
  if(!found) {
        cout << "The element is not found." << endl;
    }

  
    return 0;
}
