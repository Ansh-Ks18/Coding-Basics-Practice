#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of pairs: ";
    cin >> n;

    set<pair<int, int>> s;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        s.insert(make_pair(a, b));
    }

    cout << "The set s is: " << endl;
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }






    return 0;
}
