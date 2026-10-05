#include <iostream>
#include <String>
using namespace std;

int main() {
 string n;
 cin>>n;

cout<<" The Original String is:"<<n<<endl;
 int s=n.length();
  cout<<"The Reversed String is: ";
 for(int i=s-1;i>=0;i--){
    cout<<n[i];
 }

    return 0; 
}