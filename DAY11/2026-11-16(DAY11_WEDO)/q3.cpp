#include <iostream>
using namespace std;

int addScores(int first, int second) {
    return first + second;
}

int main() {
    int score1;
    int score2;
    cout<<"first score: ";
    cin>>score1;
    cout<<"second score: ";
    cin>>score2;
    int total = addScores(score1, score2);
    cout<<"Total score: "<<total;
}