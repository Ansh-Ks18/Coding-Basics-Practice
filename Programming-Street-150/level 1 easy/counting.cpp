// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int a;
    cin>>a;
    int i=0;
    while(a != 0){
       a /= 10;
       i++;
           }
 cout << "Number of digits: " << i << endl; 
    return 0;
}