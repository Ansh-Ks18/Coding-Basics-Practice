#include <iostream>
using namespace std;

int add(int a,int b){
    return a+b;
}

int sub(int a,int b){
    return a-b;
}


void operation(int (*fun)(int,int ),int a,int b){
  int result=fun(a,b);
    cout<<result<<endl;
}

int main() {

int (*ptr1)(int , int)=add;
int (*ptr2)(int , int)=sub;

operation(add,4,5);
operation(sub,5,4);
    return 0;
}
