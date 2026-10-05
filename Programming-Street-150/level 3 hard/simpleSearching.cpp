#include <iostream>
using namespace std;


int BinarySearch(int arr[],int n,int k){

int l=0;
int r=n-1;

int mid=l+(r-l)/2;

while(l<=r){
    if(arr[mid]==k){
        return mid;
    }

    else if( arr[mid]>k){
        r=mid-1;


    }
    else{
        l=mid+1;
    }
}

return -1;


}

int main() {
    int n;
    cin>>n;

    int arr[34];
cout<<" Enter the elements of an array:";
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }

cout<<" The elements are:";
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

int k;
cout<<" Enter the target element:";
cin>>k;

int result =BinarySearch(arr,n,k);
if(result==-1){
    cout<<"the index where the element present:"<<result<<"False";
    
    
}
else{
    cout<<"the index where the element present:"<<result<<"True";
}

    

    return 0;
}