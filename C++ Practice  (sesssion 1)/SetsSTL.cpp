#include <iostream>
#include <iterator>
#include <set>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    set<int, greater<int>> s; // Set in descending order

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        s.insert(temp);
    }

    cout << "The set s is: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Assigning elements from s to s2
    set<int> s2(s.begin(), s.end());

    // Print all elements of the set s2
    cout << "The set s2 after assign from s is: ";
    for (auto itr = s2.begin(); itr != s2.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;

    // Erase elements up to a specific element
    cout << "The set s after erasing elements up to 30: ";
    s.erase(s.begin(), s.find(30));
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Erase a specific element
    cout << "The set s after erasing 40 (if exists): ";
    s.erase(40);
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Display lower_bound and upper_bound
    auto lb = s.lower_bound(40);
    auto ub = s.upper_bound(40);

    if (lb != s.end()) {
        cout << "s.lower_bound(40) : " << *lb << endl;
    } else {
        cout << "s.lower_bound(40) : Not found" << endl;
    }

    if (ub != s.end()) {
        cout << "s.upper_bound(40) : " << *ub << endl;
    } else {
        cout << "s.upper_bound(40) : Not found" << endl;
    }

    return 0;
}
