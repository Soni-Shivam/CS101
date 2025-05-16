#include<iostream>
using namespace std;

int maxMoneyTill(int index, int houses[], int size) {
    if (index == 0) return houses[0];
    if (index == 1) return max(houses[0], houses[1]);
    return max(houses[index] + maxMoneyTill(index-2, houses, size), maxMoneyTill(index-1, houses, size));
}
int main() {
    int numOfHouses= 10;
    int houses[numOfHouses] = {3,2,5,10,7,8,6,4,12,15};
    cout << maxMoneyTill(numOfHouses-1, houses, numOfHouses)<< endl;
    return 0;
}
