#include <iostream>
using namespace std;

int main() {

    int a,b,operation;
    cin>>a>>b;

cout<<"Enter the operation you want to perform:";
cout<<"1. Addition\n2. Subtraction\n3. Modulus\n4. Multiplication\n5. Division" << endl;

cin>>operation;


    switch(operation){
        case 1:
        cout<<" The result of the two numbers are: "<< a+b;
        break;

        case 2:
        cout<<" The result of the two numbers are: "<<a-b;
        break;

case 3:
       cout<<" The result of the two numbers are: "<<a%b;
        break;

        case 4:
       cout<<" The result of the two numbers are: "<< a*b;
        break;


case 5:
       cout<<" The result of the two numbers are: "<<a/b;
        break;

        default:
        cout<<" It is not valid ";
        break;
    }
    
    
    return 0;
}