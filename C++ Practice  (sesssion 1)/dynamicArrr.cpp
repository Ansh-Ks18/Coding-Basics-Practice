#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num, q;

    // Read number of libraries and number of queries
    cin >> num >> q;

    // Create a vector of vectors to hold the libraries
    vector<vector<int>> libraries(num);

    // Read each library
    for (int i = 0; i < num; ++i) {
        int k;
        cin >> k;  // Number of books in the current library
        libraries[i].resize(k);  // Resize the current vector to hold k books
        for (int j = 0; j < k; ++j) {
            cin >> libraries[i][j];  // Read the book IDs into the current library
        }
    }

    // Process each query
    for (int i = 0; i < q; ++i) {
        int a, b;
        cin >> a >> b;  // Read the indices for the query
        cout << libraries[a][b] << endl;  // Output the queried book ID
    }

    return 0;
}
