#include <iostream>
using namespace std;

int fun(int &n){
   
    if(n%2==0){
        cout<<"Even";
    }
    else {
        cout<<" Odd";
    }
    
}

int main() {
    int n;
    cin >> n;
      cout << "The Number is: ";
     fun(n);

    return 0;
}
