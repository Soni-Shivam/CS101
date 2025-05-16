#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n,sumx =0,sumy =0,sumz =0;
    cin >> n;
    vector<vector<int>> z(n, vector<int>(n));
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> z.at(i).at(j);
    for(int i =0; i < n; i++) {
        for(int j=0; j < n ; j++) {
            sumx += (j) ?  abs(z.at(i).at(j)- z.at(i).at(j-1)) : z.at(i).at(j);
            if (j == n - 1) sumx += z.at(i).at(j); // rightmost column
            sumy += (j) ?  abs(z.at(j).at(i)- z.at(j-1).at(i)) : z.at(j).at(i);
            if (i == n - 1) sumy += z.at(i).at(j); // bottommost row
            sumz += (z.at(i).at(j)) ? 2 : 0;
        }
    }
    cout << sumx + sumy + sumz;
    return 0;
}