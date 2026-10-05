// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int fun(int arr[],int n,int t){
    int low=0;
    int high =n-1;

     
    while(low<=high){
       int mid=low+(high-low)/2;
        if(arr[mid]==t){
           return mid;
        }
        else if(arr[low]<=t && t<arr[mid]){
       
       high = mid - 1;
        }
        else{
           
            low=mid+1;
        }
        
    }
    return -1;
}
int main() {
  int n;

  cin>>n;
  int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int t;
cin>>t;


for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
    int result = fun(arr, n, t);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}