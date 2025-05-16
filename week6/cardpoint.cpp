#include<iostream>
using namespace std;

int main() {
    char suit, last_one=0, last_second=1, last_third=2, last_fourth=3;
    int score = 0;
    bool lastTimeScoreAAdded = false, lastTimeScoreBAdded = false;
    int resetFlagAAfter = 0, resetFlagBAfter = 0;
    for(int i =0; i <8; i++) {
        cin >> suit;
        cout <<"suit :" << suit << " last_one: " << last_one << " last_second: " << last_second << " last_third: " << last_third << " last_fourth: " << last_fourth << endl;
        if (resetFlagAAfter == 0) lastTimeScoreAAdded = false;
        if (resetFlagBAfter == 0) lastTimeScoreBAdded = false;

        if ((last_one==last_second)&&(last_one==suit)&&(last_one==last_third)&&!lastTimeScoreAAdded&&(i>=2)) {
            score +=2;
            resetFlagAAfter = 2;
            lastTimeScoreAAdded = true;
            cout << "scored 4 combo at " << i+1 << endl;
        }
        if ((last_one==last_second)&&(last_second==last_third)&&!lastTimeScoreBAdded&&(i>=2)) {
            score +=3;
            resetFlagBAfter = 3;
            lastTimeScoreBAdded = true;
            cout << "scored 3 combo at " << i+1 << endl;
        }
        resetFlagAAfter--;
        resetFlagBAfter--;
        last_fourth = last_third;
        last_third = last_second;
        last_second = last_one;
        last_one = suit;
    }
    cout << score << endl;
    return 0;
}