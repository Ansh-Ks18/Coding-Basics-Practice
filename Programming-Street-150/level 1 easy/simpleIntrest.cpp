#include <iostream>
using namespace std;

int simpleIntrest(int p,int r,int t){
    int si=(p*r*t)/100;
    return si;
}

int main() {
    int p,r,t;
    cin>>p>>r>>t;
    int result=simpleIntrest(p,r,t); 
    cout << "The intrest is:" <<result;
    return 0;
}