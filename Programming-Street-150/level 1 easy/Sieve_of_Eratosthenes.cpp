#include <iostream>
#include <vector>
using namespace std;

void Sieve(int n, vector<bool>isPrime){
isPrime[1]=isPrime[0]=false;

for(int i=2;i<=n;i++){
if(isPrime[i]){
    for(int j=i*i;j<=n;j+2){
        isPrime[j]=false;
    }
}
}




}

int main() {
    int n;
    cout<<" Enter the upper limit :";
    cin>>n;


    

    if(n<2){
        cout<<"Invalid limit you enter:";
        return 0;
    }
vector<bool>isPrime(n+1,true);
Sieve(n,isPrime);

    for(int i=2;i<=n;i++){
        if(isPrime[i]){
            cout<<i<<" ";
        }
    }

    
    return 0;
}