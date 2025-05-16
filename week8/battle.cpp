#include<iostream>
#include<vector>
using namespace std;

void chooseFirst(int& score, vector<int>& sumChoices) {
    score += sumChoices.front();
    sumChoices.erase(sumChoices.begin());
}
void chooseLast(int& score, vector<int>& sumChoices) {
    score += sumChoices.back();
    sumChoices.pop_back();
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> theMatrix(n, vector<int>(n));
    for(int i =0; i< n; i++) for(int j =0; j<n;j++) cin >> theMatrix[i][j];
    
    /* vector<vector<int>> theMatrix = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    }; */
    
    vector<vector<int>> choices((n));
    // conversion of matrix
    for(int k =0; k<n/2; k++){
        for(int i=k+1;i<n-k;i++) (choices.at(k)).push_back(theMatrix[i][k]);
        for(int j=k+1;j<n-k-1;j++) (choices.at(k)).push_back(theMatrix[n-k-1][j]);
    }
    // upper mirrored L-pattern
    for (int k = n/2; k >=1; k--) {
        for (int j = n - k-1; j >= k; j--) choices[n-k].push_back(theMatrix[k-1][j]);
        for (int i = k; i <= n - k; i++) choices[n-k].push_back(theMatrix[i-1][n - k]);
    }

    /* // print choices
    for (auto choice : choices) {
        for(int element : choice) {
            cout << element << " ";
        }
        cout << endl;
    } */
    // sum
    vector<int> sumChoices;
    for (auto choice : choices) {
        int sum = 0;
        for(int element : choice) sum += element;
        sumChoices.push_back(sum);
    }
    /* // print sum
    cout<< "sumChoices: ";
    for (int sum : sumChoices) {
        cout << sum << " ";
    }
    cout<<endl; */

    // game
    int scoreA=0, scoreB=0;
    while (!sumChoices.empty()) {
        if (sumChoices.front() >= sumChoices.back()) chooseFirst(scoreA, sumChoices);
        else chooseLast(scoreA, sumChoices);
        if (sumChoices.empty()) break;
        if (sumChoices.front() >= sumChoices.back()) chooseFirst(scoreB, sumChoices);
        else chooseLast(scoreB, sumChoices);
    }
   /*  cout << "Score A: " << scoreA << endl;
    cout << "Score B: " << scoreB << endl; */
    cout << scoreA;
    return 0;
}