#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<" Enter the number:";
   cin>>n;
   if(n<=0){
    cout<<" Invalid number !!!";
   }
   
    int a=0;
   int b=1;

   if(n==1){
    cout<<a;
   }
   else if(n==2){
    cout<<b;
   }
  
   
   cout<<a<<" "<<b<<" ";
   
   for(int i=3;i<n;i++){
    int next =a+b;
     cout<<next<<" ";
    a=b;
    b=next;

   }
  cout<<endl;
    return 0;
}