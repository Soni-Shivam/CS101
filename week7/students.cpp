#include<iostream>
using namespace std;

int main() {
    int n,m;
    cin >> n;
    int arrA[n];
    for(int i=0; i<n; i++) cin >> arrA[i];
    cin >> m;
    int arrB[m];
    bool flag = false;
    for(int i=0; i<m; i++) cin >> arrB[i];
    for(int i=0; i<m; i++) {
        int student = arrB[i];
        for(int j=0; j<n;j++){
            if(arrA[j] == student) {
                break;
            }
            else if (j == n-1) {
                cout << student << " ";
                flag = true;
            }
        }
    }
    if (!flag) cout << "no new student";
    return 0;
}