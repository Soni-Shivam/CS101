#include<iostream>
#include<vector>
using namespace std;
bool checkOrder(const vector<vector<char>>& grid){
    int blue =0, red =0;
    for(auto line : grid) {
        for (auto element : line) { 
            cout<< element<<endl;
            if (element == 'B') blue++;
            else if( element=='R') red++;
        }
    }
    cout << "red: " << red << " blue: " << blue<< endl;
    if (red >=blue) return true;
    else return false;
}

int main() {
    int m, n, letter;
    vector<vector<char>> grid;
    cin >> m>>n;
    for(int i=0; i < m; i++) {
        grid.push_back({});
        for(int j =0; j<n; j++) {
            cin >> letter;
            grid.at(i).push_back(letter);
        }
    }
    cout << checkOrder(grid);
    return 0;
}