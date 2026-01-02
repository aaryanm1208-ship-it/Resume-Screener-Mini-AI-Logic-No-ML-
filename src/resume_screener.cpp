#include <iostream>
using namespace std;

/*
Project: Resume Screener
Description: Classifies candidates based on resume score
*/

int main() {
    int score;

    cout << "Enter resume score (0 - 100): ";
    cin >> score;

    if (score >= 75) {
        cout << "Status: Shortlisted ✅";
    } 
    else if (score >= 50) {
        cout << "Status: Borderline ⚠️";
    } 
    else {
        cout << "Status: Rejected ❌";
    }

    return 0;
}
