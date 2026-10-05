#include <iostream>
using namespace std;


void fun(int n){
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<"  ";
        }
        int num=1;
        for(int j=0;j<=i;j++){
            cout<<num<<" ";
            num++;
        }

 
 for(int j=i;j>0;j--){
            cout<<j<<" ";
           
            
          
        } 
cout<<endl;
    }

}
int main() {
    fun(4);
    return 0;
}
