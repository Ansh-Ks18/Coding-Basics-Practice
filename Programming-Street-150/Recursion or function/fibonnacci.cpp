#include<iostream>
using namespace std;

class Solution {
public:
    int fib(int n) {
        if(n==1)
            return 1;
        
         if(n==0)
            return 0;
        
        
        return fib(n-2)+fib(n-1);

    }
};

int main(){
    Solution s;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++) {
        cout << s.fib(i) << " "; 
    }
    cout << endl;
   
    
    return 0;
}
