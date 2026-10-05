#include <iostream>
#include <cmath>
using namespace std;

class Basic {
public:
    double add(int a, int b) {
        return a + b;
    }
    double sub(int a, int b) {
        return a - b;
    }
    double mult(int a, int b) {
        return a * b;
    }
    double div(int a, int b) {
        if (b == 0) {
            cout << "Error: Division by zero is not allowed.\n";
            return 0;
        }
        return (double)a / b;
    }
    int mod(int a, int b) {
        if (b == 0) {
            cout << "Error: Modulus by zero is not allowed.\n";
            return 0;
        }
        return a % b;
    }
};

class Intermediate {
public:
    double Exp(int a, int b) {
        return pow(a, b);
    }
    double sqrtValue(int a) {
        if (a < 0) {
            cout << "Error: Cannot compute square root of a negative number.\n";
            return -1;
        }
        return sqrt(a);
    }
    int fact(int n) {
        if (n < 0) {
            cout << "Error: Factorial of a negative number is undefined.\n";
            return -1;
        }
        return (n == 0 || n == 1) ? 1 : n * fact(n - 1);
    }
    double perc(double a, double b) {
        if (b == 0) {
            cout << "Error: Division by zero in percentage calculation.\n";
            return 0;
        }
        return (a / b) * 100;
    }
    int rangeSumOrProduct(int a, int b, bool calculateSum) {
        int result = (calculateSum) ? 0 : 1;
        for (int i = a; i <= b; i++) {
            if (calculateSum)
                result += i;
            else
                result *= i;
        }
        return result;
    }
};


class ScientificCalculator {
public:
    double sine(double angle) { return sin(angle); }
    double cosine(double angle) { return cos(angle); }
    double tangent(double angle) { return tan(angle); }
    double log10(double num) { return log10(num); }
    double naturalLog(double num) { return log(num); }
};

   class UnitConverter {
public:
    double celsiusToFahrenheit(double celsius) { return (celsius * 9/5) + 32; }
    double fahrenheitToCelsius(double fahrenheit) { return (fahrenheit - 32) * 5/9; }
    double kilometersToMiles(double km) { return km * 0.621371; }
    double milesToKilometers(double miles) { return miles / 0.621371; }
};


int main() {
    Basic ob;
    Intermediate obj;
    ScientificCalculator sci;
    UnitConverter uni;
    char repeat;

do{
    cout << "++++ Welcome to KS Calculator +++\n";
    cout << "Enter 1 for Basic Operations\nEnter 2 for Intermediate Operations\nEnter 3 for ScientificCalculator Operations\nEnter 4 for UnitConverter Operations\n ";

    int choice;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1: {
            cout << "Enter 1 for Addition\n";
            cout << "Enter 2 for Subtraction\n";
            cout << "Enter 3 for Multiplication\n";
            cout << "Enter 4 for Division\n";
            cout << "Enter 5 for Modulus\n";

            int choice2;
            cout << "Enter your choice: ";
            cin >> choice2;

            cout << "Enter two integers: ";
            int a, b;
            cin >> a >> b;

            switch (choice2) {
                case 1:
                    cout << "Addition: " << ob.add(a, b) << endl;
                    break;
                case 2:
                    cout << "Subtraction: " << ob.sub(a, b) << endl;
                    break;
                case 3:
                    cout << "Multiplication: " << ob.mult(a, b) << endl;
                    break;
                case 4:
                    cout << "Division: " << ob.div(a, b) << endl;
                    break;
                case 5:
                    cout << "Modulus: " << ob.mod(a, b) << endl;
                    break;
                default:
                    cout << "Invalid choice for Basic Operations.\n";
            }
            break;
        }

        case 2: {
            cout << "Enter 1 for Exponentiation\n";
            cout << "Enter 2 for Square Root\n";
            cout << "Enter 3 for Factorial\n";
            cout << "Enter 4 for Percentage\n";
            cout << "Enter 5 for Range Sum\n";
            cout << "Enter 6 for Range Product\n";

            int choice3;
            cout << "Enter your choice: ";
            cin >> choice3;

            int a, b;
            switch (choice3) {
                case 1:
                    cout << "Enter two integers: ";
                    cin >> a >> b;
                    cout << "Exponentiation: " << obj.Exp(a, b) << endl;
                    break;
                case 2:
                    cout << "Enter an integer: ";
                    cin >> a;
                    cout << "Square Root of " << a << ": " << obj.sqrtValue(a) << endl;
                    break;
                case 3:
                    cout << "Enter an integer: ";
                    cin >> a;
                    cout << "Factorial of " << a << ": " << obj.fact(a) << endl;
                    break;
                case 4:
                    cout << "Enter two numbers: ";
                    cin >> a >> b;
                    cout << "Percentage: " << obj.perc(a, b) << "%" << endl;
                    break;
                case 5:
                    cout << "Enter two integers: ";
                    cin >> a >> b;
                    cout << "Range Sum (" << a << " to " << b << "): " << obj.rangeSumOrProduct(a, b, true) << endl;
                    break;
                case 6:
                    cout << "Enter two integers: ";
                    cin >> a >> b;
                    cout << "Range Product (" << a << " to " << b << "): " << obj.rangeSumOrProduct(a, b, false) << endl;
                    break;
                default:
                    cout << "Invalid choice for Intermediate Operations.\n";
            }
            break;
        }

         case 3: {
        cout << "Scientific Mode: Trigonometric Functions, Logarithms\n";
        int subChoice;
        cout << "1. Sine\n2. Cosine\n3. Tangent\nChoose: ";
        cin >> subChoice;
        
        double angle;
        cout << "Enter angle (in radians): ";
        cin >> angle;
        if (subChoice == 1) cout << "Sine: " << sci.sine(angle) << endl;
        else if (subChoice == 2) cout << "Cosine: " << sci.cosine(angle) << endl;
        else if (subChoice == 3) cout << "Tangent: " << sci.tangent(angle) << endl;
        break;
    }
     case 4: {
        cout << "Unit Conversion: Temperature, Length\n";
        int subChoice;
        cout << "1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\nChoose: ";
        cin >> subChoice;
        double value;
        cout << "Enter value: ";
        cin >> value;
        if (subChoice == 1) cout << "Result: " << uni.celsiusToFahrenheit(value) << " °F\n";
        else if (subChoice == 2) cout << "Result: " << uni.fahrenheitToCelsius(value) << " °C\n";
        break;
    }


        default:
            cout << "Invalid choice. Please select 1 or 2.\n";
    }
     cout << "Do you want to perform another calculation? (y/n): ";
        cin >> repeat; 
}while (repeat == 'y' || repeat == 'Y');

    cout << "Thank you for using KS Calculator! Goodbye!\n";
    return 0;
}