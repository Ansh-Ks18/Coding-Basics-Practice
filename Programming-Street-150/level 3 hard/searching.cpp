#include <iostream>
using namespace std;


int search(int arr[],int n,int k){
int l=0;
int r=n-1;

int mid = l + (r - l) / 2;


while (l <= r) {

 if( arr[mid]==k){
    return mid;
}

else if( arr[mid]<k){
     l=mid+1;


}

else {
   
    r=mid-1;
     
}

}
 return -1;
}




int main() {
    int n;
    int i;
    int arr[100];

    cin >> n;

    cout << "Enter the elements of the array: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "The elements of the array are: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int k;
    cout<<" Enter the target element you want to find in the array:";
    cin>>k;

    int result = search(arr, n, k);
if (result != -1) {
    cout << "Element found at index: " << result << endl;
} else {
    cout << "Element not present in the array." << endl;
}


    return 0;
}
