#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    // Constructor
    Complex(float r, float i) : real(r), imag(i) {}

    // Overload the + operator to add two complex numbers
    Complex operator+(const Complex& other) {
        float newReal = this->real + other.real;
        float newImag = this->imag + other.imag;
        return Complex(newReal, newImag);
    }

    // Overload the - operator to subtract one complex number from another
    Complex operator-(const Complex& other) {
        float newReal = this->real - other.real;
        float newImag = this->imag - other.imag;
        return Complex(newReal, newImag);
    }

    // Overload the * operator to multiply two complex numbers
    Complex operator*(const Complex& other) {
        float newReal = (this->real * other.real) - (this->imag * other.imag);
        float newImag = (this->real * other.imag) + (this->imag * other.real);
        return Complex(newReal, newImag);
    }

    // Overload the << operator to display the complex number in the format a + bi
    friend ostream& operator<<(ostream& out, const Complex& c) {
        out << c.real;
        if (c.imag >= 0) {
            out << " + " << c.imag << "i";
        } else {
            out << " - " << -c.imag << "i";
        }
        return out;
    }
};

int main() {
    float real1, imag1, real2, imag2;
    cout << "Enter the real and imaginary parts of complex number 1: ";
    cin >> real1 >> imag1;
    cout << "Enter the real and imaginary parts of complex number 2: ";
    cin >> real2 >> imag2;

    Complex num1(2, 3);
    Complex num2(6, 8);

    // Add two complex numbers
    Complex sum = num1 + num2;
    cout << "Sum of complex numbers: " << sum << endl;

    // Subtract one complex number from another
    Complex diff = num1 - num2;
    cout << "Difference of complex numbers: " << diff << endl;

    // Multiply two complex numbers
    Complex prod = num1 * num2;
    cout << "Product of complex numbers: " << prod << endl;

    return 0;
}
