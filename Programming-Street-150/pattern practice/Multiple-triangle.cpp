#include <iostream>
using namespace std;


  
void fun1(int n){  
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }}


void fun2(int n){ 
     int num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }

}



void fun3(int n){
  for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }}





void fun4(int n){ 
    
    for(int i=1;i<n;i++){
      
        for(int j=i;j>0;j--){
            cout<<j<<" ";
         
        }
        cout<<endl;
    }

}


void fun5(int n){ 
    
    for(int i=0;i<n;i++){
         int num=4;
        for(int j=0;j<=i;j++){
            cout<<num<<" ";
            num--;
        }
        cout<<endl;
    }

}


void fun6(int n){ 
    
    for(int i=0;i<n;i++){
       
        for(int j=n;j>i;j--){
            cout<<j<<" ";
           
        }
        cout<<endl;
    }
}

void fun7(int n){ 
    char c='A';
    for(int i=0;i<n;i++){
       
        for(int j=0;j<=i;j++){
            cout<<c<<" ";
            c=c+1;
           
        }
        cout<<endl;
    }

}

void fun8(int n){ 
 
      for(int i=1;i<n;i++){
        for(int j=1;j<i;j++){
            cout<<" ";
       
        }
       
          for(int j=n;j>i;j--){
            cout<<i;
       
        }
        cout<<endl;
    }
    }
    




int main() {
  
fun1(4);
  cout<<endl;
fun2(4);
  cout<<endl;
fun3(5);
cout<<endl;

fun4(5);

  cout<<endl;
fun5(4);

cout<<endl;

fun6(4);
 cout<<endl;
fun7(5);

cout<<endl;
fun8(5); 
    return 0;
}


