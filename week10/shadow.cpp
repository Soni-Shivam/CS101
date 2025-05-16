#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n, sumxy = 0, sumxz = 0, sumyz = 0;
    cin >> n;
    vector<vector<int>> h(n, vector<int>(n));
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> h.at(i).at(j);

    for (int i = 0; i < n; i++) {
        int maxx = 0, maxy = 0;
        for (int j = 0; j < n; j++) {
            sumxy += h.at(i).at(j) > 0;
            maxx = max(maxx, h.at(i).at(j));
            maxy = max(maxy, h.at(j).at(i));
        }
        sumxz += maxx;
        sumyz += maxy;
    }
    cout << sumxy + sumxz + sumyz << endl;
}
