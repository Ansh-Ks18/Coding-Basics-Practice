#include <iostream>
using namespace std;

class Distance {
private:
    int meters;

public:
    // Constructor
    Distance(int m) : meters(m) {}

    // Overload the + operator to add two distances
    Distance operator+(const Distance& other) {
        int totalMeters = meters + other.meters;
        return Distance(totalMeters);
    }

    // Overload the - operator to subtract one distance from another
    Distance operator-(const Distance& other) {
        int difference = meters - other.meters;
        return Distance(difference);
    }

    // Overload the ++ operator to increment the distance by 1 meter
    Distance operator++() {
        return Distance(meters + 1);
    }

    // Overload the -- operator to decrement the distance by 1 meter
    Distance operator--() {
        return Distance(meters - 1);
    }

       // Overload the << operator to display the distance in meters
    friend ostream& operator<<(ostream& out, const Distance& d) {
        out << d.meters << " meters";
        return out;
};};

int main() {
    int d1, d2;
    cout << "Enter distance 1 in meters: ";
    cin >> d1;
    cout << "Enter distance 2 in meters: ";
    cin >> d2;

    Distance dist1(d1);
    Distance dist2(d2);

    // Add two distances
    Distance sum = dist1 + dist2;
    cout << "Sum of distances: " << sum << endl;

    // Subtract one distance from another
    Distance diff = dist1 - dist2;
    cout << "Difference of distances: " << diff << endl;

    // Increment distance 1
    Distance incDist1 = ++dist1;
    cout << "Distance 1 after increment: " << incDist1 << endl;

    // Decrement distance 2
    Distance decDist2 = --dist2;
    cout << "Distance 2 after decrement: " << decDist2 << endl;

    return 0;
}
