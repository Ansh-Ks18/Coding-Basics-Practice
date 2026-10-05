#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
  
    for(int i=1;i<=n;i++){
          int s=1;
        for(int j=1;j<=i;j++){
            cout<<s;
            s++;
        }
        cout  << endl;
    }
    
    return 0;
}