#include<iostream>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int temp = max(n,m);
    int traffic[temp][temp];
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            // int temp;
            cin >> traffic[i][j];
            //traffic[i][j] = temp;
        }
    }
    // print matrix
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cout << traffic[j][i]<< " ";
        }
        cout << endl;
    }
    return 0;
}