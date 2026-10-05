#include<iostream>
using namespace std;

class vector2D{

private:
int x,y;
public:

vector2D(int a,int b){
    x=a;
    y=b;

}

vector2D operator+(const vector2D& other){
   int new1=other.x+x;
   int new2= other.y+y;
return vector2D(new1,new2);
}

vector2D operator-(const vector2D& other){
   int new1=other.x-x;
   int new2= other.y-y;
return vector2D(new1,new2);
}

friend ostream& operator<<(ostream& out, const vector2D&c){
    out<<"("<<c.x<<" " <<c.y<<")";
    
    return out;
}





};

int main(){

vector2D v1(1, 2);
    vector2D v2(3, 4);

    vector2D result = v1 + v2;

    cout << "Result of v1 + v2: " << result << endl;


return 0;



}