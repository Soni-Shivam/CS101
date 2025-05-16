#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, num = 1;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));

    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (num <= n * n) {
        for (int i = left; i <= right; i++) matrix.at(top).at(i) = num++;
        top++;
        for (int i = top; i <= bottom; i++) matrix.at(i).at(right) = num++;
        right--;
        for (int i = right; i >= left; i--) matrix.at(bottom).at(i) = num++;
        bottom--;
        for (int i = bottom; i >= top; i--) matrix.at(i).at(left) = num++;
        left++;
    }
    for (auto row : matrix) {
        for (auto val : row) cout << val << " ";
        cout << "\n";
    }
    return 0;
}
