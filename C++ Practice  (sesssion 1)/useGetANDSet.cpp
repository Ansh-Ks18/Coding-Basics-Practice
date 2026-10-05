#include <iostream>

class MyClass {
private:
    int x; // Private variable

public:

    void setX(int value) {
        x = value;
    }

    int getX() {
        return x;
    }
};

int main() {
    MyClass obj;
    obj.setX(9990); // Accessing private member using public method
    std::cout << "Value of x: " << obj.getX() << std::endl;
    return 0;
}
