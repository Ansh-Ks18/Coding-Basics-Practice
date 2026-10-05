#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    v.pop_back(); // Remove the last element
    v.erase(v.begin() + 1); // Remove the second element
    v.erase(v.begin(), v.begin() + 3); // Remove the first three elements

    cout << "enter the elements:";

    // Correct loop to print the elements
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    } 

    return 0;
}
