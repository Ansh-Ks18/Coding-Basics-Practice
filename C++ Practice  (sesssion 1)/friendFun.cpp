#include <iostream>

using namespace std;

class A{
    int x;
    public :
    A(int y){
        x=y;
    }
   
   friend void orry(A obj);
};


void orry(A obj){
    cout<<obj.x;
};

int main(){
    int x;
    cin>>x;
    A o(177);
   orry(o);
    
}