#include<simplecpp>

string removeSpaces(string word) {
    string newWord = "";
    for(int i=0; i < int(word.length()); i++) {
        if (word[i] != ' ') {
            newWord += word[i];
        }
    }
    // cout << "removed spaces, the partial word is now " << newWord << endl;
    return newWord;
}

main_program{
    bool isMatching = true;
    int n; 
    cin >> n;
    string candidates[n] = {};
    for(int i=0; i < n; i++) {
        cin >> candidates[i];
    }
/*     for(int i =0; i<n; i++) { // array printer
        cout << candidates[i] << " ";
        cout << endl;
    } */
    string partialWord;
    bool flag = false;
    cin.ignore();
    getline(cin, partialWord);
    // cout << "the partial word entered is " <<  partialWord <<endl;
    partialWord = removeSpaces(partialWord);

    for(int i=0; i < n; i++) {
        string candidate = candidates[i];
        if (candidate.length() != partialWord.length()) {
            // cout << candidates[i] << " not matching, diff length"<<endl; 
            continue;
        }
        else {
            for(int i=0; i< int(partialWord.length()); i++){    
                if (partialWord[i] == '_') continue;
                else if (partialWord[i] != candidate[i]) {
                    isMatching = false;
                    break;
                    // cout << candidates[i] << " not matching, diff char"<<endl;
                }
            }
        }
        if (isMatching) {
            flag = true;
            cout << candidates[i] <<endl;
        }
    }
    if (!(flag)) cout << "Not Possible" <<endl;
}