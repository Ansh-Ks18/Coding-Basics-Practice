// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n=8;
    int i;
    int t;
    cout<<" enter the position in which you want to add :";
    cin>>t;
       int s;
   
    cout<<" enter the element you want to add at this position ";
     cin>>s;
    
 int arr[n]={1,2,3,4,5,6,7};
 
 for(i=n-2;i>=t;i--){
 arr[i+1]=arr[i];
    
 }
 arr[t]=s;
 
 for(i=0;i<n;i++){
     cout<<arr[i]<<" ";
 }
    return 0;
}