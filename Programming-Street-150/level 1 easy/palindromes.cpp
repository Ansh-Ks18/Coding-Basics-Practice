#include <iostream>
#include <string>
using namespace std;



int main() {
   string a;
    cout << "Enter a string: ";
   int i;
   cin>>a;
      string temp=a;
   int n=temp.length();

    if (n == 0) {  
        cout << "The string is empty." << endl;
        return 0;
    }

   cout<<" The string is :"<<temp<<endl;

   string reversed = "";
   for(int i=n-1;i>=0;i--){
     reversed += temp[i];
   }
    cout << "The reversed string is: " << reversed << endl;

   if(reversed ==temp){
    cout<<" The given string is palindrome";
   }
   else{
    cout<<" It is not a palindrome";
   }
    return 0;
}
