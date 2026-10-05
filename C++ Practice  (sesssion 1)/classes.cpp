#include <iostream>
using namespace std;

class Student {
private:
    static const int NUM_SCORES = 5; // Define the number of scores
    int scores[NUM_SCORES];

public:
    // Function to input scores
    void input() {
        for(int i = 0; i < NUM_SCORES; ++i) {
            cin >> scores[i];
        }
    }

    // Function to print scores
    void print_scores() const {
        for(int i = 0; i < NUM_SCORES; ++i) {
            cout << scores[i] << " ";
        }
        cout << endl;
    }

    // Function to get the total sum of scores
    int get_total_score() const {
        int total = 0;
        for(int i = 0; i < NUM_SCORES; ++i) {
            total += scores[i];
        }
        return total;
    }
};

int main() {
    int num_students;
    cout << "Enter the number of students: ";
    cin >> num_students;

    Student students[num_students]; // Array of Student objects

    // Input scores for each student
    for(int i = 0; i < num_students; ++i) {
        cout << "Enter scores for student " << i + 1 << ": ";
        students[i].input();
    }

    // Print scores and total for each student
    for(int i = 0; i < num_students; ++i) {
        cout << "Scores for student " << i + 1 << ": ";
        students[i].print_scores();
        cout << "Total score: " << students[i].get_total_score() << endl;
    }

    return 0;
}
