#include <iostream>
using namespace std;

int fun(int n){
int sum=0;
while(n!=0){
     int digit =n%10;
     sum+=digit;
n=n/10;
    
   
}
 
 
return sum;
}

int main() {
    int n;
    cin>>n;
    int result=fun(n);
    cout<<result;

     
    return 0;
}