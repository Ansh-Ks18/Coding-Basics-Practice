#include<iostream>
using namespace std;

class payment{

        public:
virtual void processPayment(){
    cout<<"Pay the bill.";
}

 virtual ~payment() {}
};

class CreditCardPayment: public payment{
 void processPayment(){
    cout<<" Pay the bill by credit card. ";
}
};

class PayPalPayment: public payment{
 void processPayment(){
    cout<<" Pay the bill by upi.";
}
};

class BankTransferPayment: public payment{
 void processPayment(){
    cout<<"Pay the bill by BankTransfer. ";
}
};

int main(){
   
    payment* p;
     int choice;

    // Displaying payment options to the user
    cout << "Select a payment method:" << endl;
    cout << "1. Credit Card" << endl;
    cout << "2. PayPal" << endl;
    cout << "3. Bank Transfer" << endl;
    cout << "Enter your choice (1/2/3): ";
    cin >> choice;
    switch(choice){
        case 1:
        p=new CreditCardPayment();
        break;
            case 2:
           p = new PayPalPayment();
            break;
        case 3:
           p = new BankTransferPayment();
            break;
        default:
            cout << "Invalid choice! Please select a valid payment method." << endl;
            return 1;
    }
    
       // Processing the selected payment method
    if(p){
      p->processPayment();
    }
    
   
    delete p; 
    return 0;

}