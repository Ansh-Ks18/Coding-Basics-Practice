#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Triangle{
    public:
        void triangle(){
            cout<<"I am an isosceles triangle"<<endl;
        }
};
class Isosceles : public Triangle{
    public:
        void isosceles(){
            cout<<"In an isosceles triangle two sides are equal"<<endl;
        }
};
class Isosceles2 : public Isosceles{
    public:
        void isosceles2(){
            cout<<"I am a triangle"<<endl;
        }
};

int main(){
    Isosceles2 isc;
    isc.triangle();
     isc.isosceles();
    isc.isosceles2();
    return 0;
}
