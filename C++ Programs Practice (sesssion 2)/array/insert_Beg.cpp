// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
  int n=6;
  int arr[n]={1,2,3,4,5};
int t;
cout<<"Enter the element to insert in the begining: ";
cin>>t;

for(int i=n-1;i>0;i--){
 arr[i]=arr[i-1];

    
}

arr[0]=t;
cout<<"The final arr is after insertion: ";
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";}


    return 0;
}