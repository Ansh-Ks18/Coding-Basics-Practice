#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
    set<int> s1;
    set<int> s2;

    int n;
   
    cin >> n;
   
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        s1.insert(temp);
    }

    int m;
    cin >> m;
  
    for (int i = 0; i < m; i++) {
        int temp;
        cin >> temp;
        s2.insert(temp);
    }

    set<int> intersection;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(intersection, intersection.begin()));

    if (intersection.empty()) {
        cout << "No intersection" << endl;
    } else {
        cout << "Intersection elements: ";
        for (auto it = intersection.begin(); it != intersection.end(); it++) {
            cout << *it << " ";
        }
        cout << endl;
    }

    return 0;
}
