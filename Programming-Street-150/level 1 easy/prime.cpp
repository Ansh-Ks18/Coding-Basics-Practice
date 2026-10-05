#include <iostream>
#include <math.h>
using namespace std;

void fun(int &n){
   
    if(n<=1){
        cout<<"No, it is not a prime number";
        return;
    }
   

   for(int i=2;i<=sqrt(n);i++){
      if(n%i==0){
        cout<<" The number is not a prime number";
      return;
    }
    
   } 
      cout<<" It is prime number";

    
}

int main() {
    int n;
    cin >> n;
     fun(n);

    return 0;
}

