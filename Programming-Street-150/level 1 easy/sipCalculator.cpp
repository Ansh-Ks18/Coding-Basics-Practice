#include <iostream>
#include<cmath>
using namespace std;



double monthlyconversion(int r) {
    double monthly = r / (12 * 100.0); 
    return monthly;
}


double Sip(double p,double result1,double n){
    double si=(p*(pow(1+result1,n)-1)*(1+result1))/result1;
    return si;
}

int main() {
    double p,r;
    int n;
    cout<<"Enter the investment per month: ";
    cin>>p;
    cout<<"Enter the annual rate of return (in %):";
    cin>>r;
    cout<<"Enter the no. of installments  :";
    cin>>n;

double result1=monthlyconversion(r);

 double result=Sip(p,result1,n); 
    cout << "The Future value is :" <<result;
    return 0;
}