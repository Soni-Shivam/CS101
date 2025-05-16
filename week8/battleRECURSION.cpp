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
void battle(int& scoreA, int& scoreB, vector<int>& sumChoices) {
    if (sumChoices.empty()) return;
    if (sumChoices.front() >= sumChoices.back()) chooseFirst(scoreA, sumChoices);
    else chooseLast(scoreA, sumChoices);
    if (sumChoices.empty()) return;
    if (sumChoices.front() >= sumChoices.back()) chooseFirst(scoreB, sumChoices);
    else chooseLast(scoreB, sumChoices);
    battle(scoreA, scoreB, sumChoices);
}
int main() {
    int n, scoreA=0, scoreB=0;
    cin >> n;
    vector<vector<int>> theMatrix(n, vector<int>(n)), choices((n));
    for(int i =0; i< n; i++) for(int j =0; j<n;j++) cin >> theMatrix[i][j];
    for(int k =0; k<n/2; k++){
        for(int i=k+1;i<n-k;i++) (choices.at(k)).push_back(theMatrix[i][k]);
        for(int j=k+1;j<n-k-1;j++) (choices.at(k)).push_back(theMatrix[n-k-1][j]);
    }
    for (int k = n/2; k >=1; k--) {
        for (int j = n - k-1; j >= k; j--) choices[n-k].push_back(theMatrix[k-1][j]);
        for (int i = k; i <= n - k; i++) choices[n-k].push_back(theMatrix[i-1][n - k]);
    }
    vector<int> sumChoices;
    for (auto choice : choices) {
        int sum = 0;
        for(int element : choice) sum += element;
        sumChoices.push_back(sum);
    }
    battle(scoreA, scoreB, sumChoices);
    cout << scoreA;
    return 0;
}