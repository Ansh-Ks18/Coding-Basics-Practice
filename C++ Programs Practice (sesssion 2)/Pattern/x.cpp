
#include <iostream>
using namespace std;

int main() {
    int n = 5; // height of the pattern
    // midpoint of the pattern

    for (int i = 1; i <= n; i++) { // loop for rows
         for(int j=1;j<=n;j++){
            if(i==j || i+j==n+1){
                cout<<"0";
            }
            else{
                cout<<" ";
            }
            
        }
        
          cout << endl; // move to the next line after printing each row
    }
       
     
    }
