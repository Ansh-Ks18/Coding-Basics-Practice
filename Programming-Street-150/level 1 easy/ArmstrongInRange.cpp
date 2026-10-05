// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int findcount(int i){
    
    int count=0;
    while(i!=0){
        int digit =i%10;
        count++;
        i/=10;
    }
    return count;
}




int sum(int i, int count) {  
    int totalSum = 0; 
    while (i != 0) {   
        int digit = i % 10;
        totalSum += pow(digit, count);
        i /= 10;
    }
    return totalSum;
}

int main() {

int lower,upper;

cin>>lower>>upper;

if(lower<1 || upper>500 || lower>upper){
    cout<<" Invalid range";
    return 1;
}
   
        for(int i=lower;i<=upper;i++){
            int count=findcount(i);
            if(sum(i,count)==i){
                cout<<i<<" "<< " is an Armstrong number." << endl;
            }
        }
    
   
   
    return 0;
}