#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
 
    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }

    for(auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl; // Adding newline for better output readability

    sort(s.begin(), s.end());

    for(auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl; // Adding newline for consistency

    return 0;
}
