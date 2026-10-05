#include <iostream>
using namespace std;

bool fun(int i) {
    return i % 2 == 0;  
}

int main() {
    int lower,upper;
    cin >> lower>>upper;  

for(int i=lower;i<=upper;i++){
     if (fun(i)) {
        cout << i << " is even." << endl;
    } else {
        cout << i << " is odd." << endl;
    }

}
   

    return 0;
}
