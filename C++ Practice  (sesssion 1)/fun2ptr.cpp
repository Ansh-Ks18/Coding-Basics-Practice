#include <iostream>
using namespace std;
void update(int*a1,int*b2){
    cout<<*a1+*b2<<endl;
    if (*b2>*a1){
        cout<<*b2-*a1;
    }
    else if (*a1>*b2){
cout<<*a1-*b2;
    }
        
else{
    cout<<"none";
}
   
}


int main() {
int a,b;
cin>>a;
cin>>b;
int*a1=&a;
int*b2=&b;
update(&a,&b);

    return 0;
}
