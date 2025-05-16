#include<iostream>
using namespace std;

bool isSafe(int row, int col, vector<string>& board, int n) {
    for(int i =0; i <row; i++) {
        if(board[i][col] == 'Q') return false;
    }
    for (int i = row -1, int j = col -1; i >=0 && j >= 0; i--;j--) {
        if(board[i][j] == 'Q') return false;
    }
}

int main() {

    return 0;
}
// to be continueddddd