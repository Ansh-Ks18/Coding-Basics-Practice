#include <iostream>
#include <vector>
#include <algorithm>  // For std::lower_bound

using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 56, 7};
    
    // Sort the vector since lower_bound requires a sorted range
    sort(v.begin(), v.end());

    // Print the sorted vector (for clarity)
    cout << "Sorted vector: ";
    for (const auto& elem : v) {
        cout << elem << " ";
    }
    cout << endl;

    // Use lower_bound to find the position of the number 3
    auto it = lower_bound(v.begin(), v.end(), 3);

    // Check if the element is found and print it
    if (it != v.end() && *it == 3) {
        cout << "Element found: " << *it << " at index " << (it - v.begin() + 1) << endl;
    } else {
        cout << "Element not found. Next greater element is at index " << (it - v.begin() + 1) << endl;
    }

    return 0;
}
