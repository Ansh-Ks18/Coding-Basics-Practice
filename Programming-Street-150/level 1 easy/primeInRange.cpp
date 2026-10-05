#include <iostream>
#include <cmath>
using namespace std;


bool isprime(int n){
    if(n<=1){
        return false;
    }

    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
       
    }
     return true;
}

int main() {
        
int lower,upper;
cin>>lower>>upper;

if(lower < 2 || upper > 500 || lower >= upper) {
    cout<<"Invalid no. inputed for checking in the range";
    return 0;
}
    for(int i=lower;i<=upper;i++){
if (isprime(i)) {
            cout << i << " is a prime number." << endl;
        } 
    } 
    
    return 0;
} 