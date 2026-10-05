#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<n;i++){
if(n%i==0)
{
   sum += i; 
} 
    }

if(sum==n){
    cout<<n<<" it is perfect number."<<endl;
}
else{
    cout<<n<<" it is not a perfect number"<<endl;
}
     return 0;
}