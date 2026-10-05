#include <iostream>
using namespace std;
class MyClass {
protected:
    int x; // Private variable

public:
    MyClass(int value) {
        x = value;
    }
};

class MyDerivedClass : public MyClass {
  
public:
    MyDerivedClass(int value) : MyClass(value) {}

    void printValue() {
        cout << "Value of x: " << x <<endl;
    }
};

int main() {
    MyDerivedClass obj(877);
    obj.printValue(); // Accessing private member using inheritance
    return 0;
}
