#include <iostream>
#include <math.h>
using namespace std;

void fun(int &n){
      int sum=(n*(n+1))/2;
   cout<<" The sum of natural numbers are:  "<<sum;
    
}

int main() {
    int n;
    cin >> n;
     fun(n);

    return 0;
}

