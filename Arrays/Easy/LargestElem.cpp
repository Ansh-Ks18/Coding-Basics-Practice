#include<iostream>
using namespace std;

void fun(int n,int arr[]){
int temp=arr[0];
for(int i=1;i<n;i++){
    if(temp<arr[i]){
        temp=arr[i];
    }}
cout<< "The Largest element is: " << temp << endl;

}

  
int main(){
int arr[5]={1,2,3,4,6};
int n=sizeof(arr)/sizeof(arr[0]);
fun(n,arr);
    return 0;
} 