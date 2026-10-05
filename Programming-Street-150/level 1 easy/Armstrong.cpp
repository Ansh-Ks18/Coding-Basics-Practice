// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;

int findcount(int n){
    
    int count=0;
    while(n!=0){
        int digit =n%10;
        cout<<digit<<endl;
        count++;
        n/=10;
    }
    return count;
}




int sum(int n, int count) {  
    int totalSum = 0; 
    while (n != 0) {   
        int digit = n % 10;
        totalSum += pow(digit, count);
        n /= 10;
    }
    return totalSum;
}

int main() {
    
    int n;
    cin>>n;
    int original=n;
    
    int result = findcount(n);
    int result3 = sum(n,result );
    cout << "Calculated Sum: " << result3 << endl;

    if (result3 == original) {  
        cout << "It is an Armstrong number." << endl;
    } else {
        cout << "It is not an Armstrong number." << endl;
    }
    return 0;
}