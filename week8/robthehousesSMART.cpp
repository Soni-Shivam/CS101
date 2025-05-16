#include<iostream>
using namespace std;
int main() {
    int numOfHouses= 8;
    cin >> numOfHouses;
    int houses[numOfHouses];
    for(int i=0; i<numOfHouses; i++){
        cin >> houses[i];
    }
    int totalMoneyRobbed[numOfHouses]; // money robbed from 0 to ith house
    totalMoneyRobbed[0] = houses[0];
    // cout<< "looted: " << totalMoneyRobbed[0] << " by not skipping the house, i = " << 0<< endl;
    totalMoneyRobbed[1] = max(houses[0], houses[1]);
    // cout<< "looted: " << totalMoneyRobbed[1] << " by " << ((houses[1] > houses[0])? "not ": "") << "skipping the house, i = " << 1 << endl; ;
    for(int i=2; i<numOfHouses; i++){
        totalMoneyRobbed[i] = max(houses[i] + totalMoneyRobbed[i-2], totalMoneyRobbed[i-1]);
        // cout<< "looted: " << totalMoneyRobbed[i] << " by " << ((houses[i] + totalMoneyRobbed[i-2]> totalMoneyRobbed[i-1])? "": "not ") << "skipping the house, i = " << i-1 << endl; ;
    }
    cout << totalMoneyRobbed[numOfHouses-1];
    return 0;
}