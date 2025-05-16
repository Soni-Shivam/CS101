#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> grid = {};
    for(int i =0; i < 9; i++) {
        grid.push_back({});
        for(int j=0; j< 9; j++) {
            int element;
            cin >> element;
            grid.at(i).push_back(element);
        }
    }
    
    return 0;
}