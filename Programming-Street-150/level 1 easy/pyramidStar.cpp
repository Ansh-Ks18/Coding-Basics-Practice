#include <iostream>
using namespace std;

void fun(int n){
    for(int i=0;i<n;i++){

        for(int j=n;j>=i;j--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
          for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;

    }
}

int main() {
 fun(5);

    return 0;
}
