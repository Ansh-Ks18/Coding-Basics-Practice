// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void copyarr(int n1,int arr[],int arr2[],int n){ 
   
  
  for(int i=0;i<n;i++){
      arr2[i]=arr[i];
      
  }
  cout<<endl;
cout<<" The new array is :" ;
for(int i=0;i<n;i++){
      cout<<arr2[i]<<" ";
      
  }
  cout<<endl;
  
  }

void insertElem(int n1,int t,int arr2[],int elem){
for(int i=n1-2;i>=t;i--){
    arr2[i+1]=arr2[i];
}
arr2[t]=elem;

cout<<" The final array with insertion at given position: ";
for(int i=0;i<=n1-1;i++){
    cout<<arr2[i]<<" ";
}
cout<<endl;
}



int main() {
   int n;
   cout<<"Enter the size of first arr: ";
   cin>>n;

    int n1;
    cout<<"enter the size of new arr: ";
   cin>>n1;
  
  
     int arr[n];
int arr2[n1];


    cout<<"Enter the elem of 1st arr :";
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  cout<<"The Elem of 1st arr are:";
  for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
      
  }


int t;
cout<<"Enter the position : ";
cin>>t;
cout<<" the position is :" <<t<<endl;
int elem;
cout<<" Enter the element you want to add at this position: ";
cin>>elem;

  
    copyarr(n1, arr, arr2, n);
  insertElem(n1,t, arr2, elem);
    return 0;
}