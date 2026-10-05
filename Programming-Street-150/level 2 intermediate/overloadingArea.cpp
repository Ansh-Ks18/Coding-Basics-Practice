#include <iostream>
using namespace std;

class Area {
    int a;
    int b;

public:
    
        void calculate(int length, int breadth) {
        double r = length * breadth;
        cout << "The area of the rectangle is: " << r << endl;
    }

    void calculate(double radius) {
        double area = 3.14 * radius * radius;
        cout << "The area of the circle is: " << area << endl;
    }

    
    void calculate(double base, double height) {
        double area = 0.5 * base * height;
        cout << "The area of the triangle is: " << area << endl;
    }
};

int main() {
    Area rect;
    rect.calculate(6, 8);  
    rect.calculate(7); 
    rect.calculate(6, 8); 
    return 0;
}
