#include<simplecpp>
bool isSameCharIgnoreCase(char x, char y) {
    return (x == y || x == (y ^ 32));
}

bool isValidAbbreviation(char a, char b, char c, char d) {
    char letter;
    int wordCount = 0;
    bool isFirstLetter = true, isValid = true;
    for(cin >> letter; letter!='\n'; cin >> letter) {
        cin >> noskipws;
        if (isFirstLetter) {
            wordCount++;
            if (!((wordCount == 1 && isSameCharIgnoreCase(letter, a)) ||
                (wordCount == 2 && isSameCharIgnoreCase(letter, b)) ||
                (wordCount == 3 && isSameCharIgnoreCase(letter, c)) ||
                (wordCount == 4 && isSameCharIgnoreCase(letter, d)))) {
                isValid = false;
                break;
            }
        };
        isFirstLetter = (letter==' ') ? true : false;
    }
    if (wordCount != 4) isValid = false;
    return isValid;
}

main_program {
    char a, b, c, d;
    cin >> a >> b >> c >> d;
    bool isValid = isValidAbbreviation(a, b, c, d);
    cout << ((isValid) ? "yes" : "no") << endl;
}
