#include<iostream>
#include<vector>
#include <cmath>
using namespace std;

struct direction {
    int dx, dy, totSteps;
};

void printLayer(vector<vector<int>>& matrix, int layerNum, vector<int>& result) {
    int steps = matrix.size() - 2 * (layerNum - 1);
    int x = layerNum - 1, y = layerNum - 1;
    vector<direction> directions = {{0, 1, steps - 1},{1, 0, steps - 1},{0, -1, steps - 1},{-1, 0, steps - 2}};
    for (auto dir : directions) {
        for (int i = 0; i < dir.totSteps; i++) {
            result.push_back(matrix.at(x).at(y));
            x += dir.dx;
            y += dir.dy;
        }
    }
    result.push_back(matrix.at(x).at(y));
}

int main() {
    int n, num,count =1;
    cin >>n;
    vector<vector<int>> matrix = {};
    vector<int> res = {};
    for(int i =0;i<n; i++) {
        matrix.push_back({});
        for(int j=0;j<n;j++) matrix.at(i).push_back(count++);
    }
    for(int i=0; i<n; i++) {{for(int j=0;j<n;j++) {cout << matrix.at(i).at(j)<< " ";}}  cout<<endl;}
    cout << endl;
    for(int i=1; i <= (matrix.size()+1)/2 ; i++) printLayer(matrix, i, res);
    for (int i = 0; i < res.size(); i++) {
        cout << res.at(i) << " ";
        if ((i + 1) % matrix.size() == 0) cout << endl;
    }
    return 0;
}
