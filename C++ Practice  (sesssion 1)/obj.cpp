#include <iostream>
using namespace std;

class Student {
private:
    static const int numScores = 5; // Define the number of scores
    int scores[numScores];

public:
    // Function to input scores
    void inputScores() {
        for (int i = 0; i < numScores; ++i) {
            cin >> scores[i];
        }
    }

       
    // Function to calculate total score
    int calculateTotalScore() const {
        int sum = 0;
        for (int i = 0; i < numScores; ++i) {
            sum += scores[i];
        }
        return sum;
    }
};

int main() {
 int num;
 cin>>num;
 Student scores[num];

for(int i=0;i<num;i++){
    scores[i].inputScores();
}


int compare=scores[0].calculateTotalScore();
int count=0;
for(int i=1;i<num;i++){
    if(scores[i].calculateTotalScore()>compare){
        count++;
    }
 

}
 cout<<count<<endl;
    return 0;
}
