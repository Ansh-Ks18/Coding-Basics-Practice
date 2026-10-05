#include <iostream>
using namespace std;

int gcd(int a,int b){
   
   if(b==0 ){
      return a;
   }


if(a>b){
   return gcd(b, a % b);
}
  
}

int main() {
   int a,b;
   cin>>a>>b;
   int s=gcd(a,b);
     cout << "GCD: " << s << endl; 
     int lcm=(a*b)/gcd(a,b);
     cout<<lcm;
    return 0;
}
