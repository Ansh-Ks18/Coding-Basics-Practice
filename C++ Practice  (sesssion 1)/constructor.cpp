#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class box{
    private:
    int l,b,h;
 
    public:
    box(){
        l=0;
        b=0;
        h=0;
    }
    
   box(int length, int breadth, int height) {
       length=l;
       breadth=b;
       height=h;
   }
   
   
   int getLength(){
       return l;
   }
   
     int getBreadth(){
       return b;
   } 
   
   int getHeight(){
       return h;
   } 
   
   
   long long CalculateVolume(){
       return l*b*h;
   }
   
   
   
};

int main() {
    
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
  box  b2(2, 3, 4); 
   b2.getLength();    // Should return 2
b2.getBreadth(); // Should return 3
b2.getHeight();    // Should return 4
b2.CalculateVolume();

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
