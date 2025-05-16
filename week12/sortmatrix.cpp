#include<iostream>
#include<vector>
using namespace std;
// d1 lab quiz q1

struct dict {
    int index;
    int sum;
};

void swap(auto& a, auto& b) {
    auto temp = b;
    b = a;
    a = temp;
}


int main() {
    int m = 3, n =5;
    cin >> m >> n;
    vector<vector<int>> matrix(n, vector<int> (m));
    /* for(int i =0; i < m; i++) {
        for(int j=0; j< n; j++) {
            cin >> matrix[i][j];
        }
    } */
    matrix = {{1,2,3,4,5},
              {6,7,8,9,10},
              {-1,2,3,-4}};
    
    // flatten
    vector<dict> flattened = {};
    for(int i =0; i<m; i++) {
        int sum=0;
        for(int j =0; j<n; j++) {
            sum += matrix[i][j];
        }
        flattened.push_back({i, sum});
    }
    // vector<dict> flattened = {{0,4}, {1,2}, {2, 3}};
    // sort
    for(int i =0; i < m ; i++) {
        for(int j =0 ; j <m-1-i; j++) {
            if(flattened[j].sum> flattened[j+1].sum) swap(flattened[j], flattened[j+1]);
        }
    };

    // for (auto row : flattened) {
    //     cout << row.index;
    // }

    for(int i =0; i<m; i++) {
        int k = flattened[i].index;
        for(int j =0; j<n; j++) {
            cout << matrix[k][j] << " ";
        }
        cout << endl;
    }

    return 0;
}