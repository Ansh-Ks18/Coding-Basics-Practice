#include<iostream>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {

       if(n==0)
       return 1;

       if(n==-1)
       return 0;

      
       return climbStairs(n-2)+climbStairs(n-1);
    }
};


int main(){
    int n;
    cin>>n;

    Solution s;
     int ans =s.climbStairs(n);
    cout<<ans<<endl;

return 0;
}