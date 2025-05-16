#include<iostream>
using namespace std;

char giveDecodedCharacter(char letterToDecode, char lastLetter) {
    if (lastLetter == letterToDecode) return '\0'; //// empty string ke liye ye use karo
    return 'Z'- (letterToDecode - 'A')%26;
}

int main() {
    char letter, last_letter = ' ';
    int n;
    cin >> n;
    for(int i =0; i <n; i++) {
        cin >> letter;
        cout << giveDecodedCharacter(letter, last_letter);
        last_letter = letter;
    }
    return 0;
}