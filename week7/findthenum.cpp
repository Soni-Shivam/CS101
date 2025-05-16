#include<iostream>
using namespace std;

int main() {
    int size;
    cin >> size;
    int numbers[size];
    for(int i=0; i<size; i++) cin >> numbers[i];
    int numToBeSearched;
    cin >> numToBeSearched;
    bool flag = false;
    for(int i=0; i <size; i++){
        if (numbers[i]==numToBeSearched) {
            cout << i<< " ";
            flag = true;
        } 
    }
    if (!flag) cout << -1 <<endl;
    return 0;
}