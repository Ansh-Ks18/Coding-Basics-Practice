#include <iostream>
using namespace std;

class Rectangle {
protected:
    int width;
    int height;
public:
    Rectangle(int w = 0, int h = 0) {
        width = w;
        height = h;
    }
    void display() {
        cout << width << " " << height << endl;
    }
};

class RectangleArea : public Rectangle {
public:
    void read_input() {
        cin >> width >> height;
    }

    void display_area() {
        cout << (width * height) << endl;
    }
};

int main() {
   
        RectangleArea r1;
        r1.read_input();
        r1.display();
        r1.display_area();
    
    return 0;
}
