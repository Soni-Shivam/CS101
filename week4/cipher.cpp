#include<simplecpp>

char numberToLetterCipher(int num) {
    return char(num + 'A' - 1); 
}
char shifterCaesarCipher(char letter, int num) {
    int n = (letter - num%26);
    if (n<=65) n+=26;
    return char(n);
}

void repeatingLetterCipher(char letter, int num) {
    for (int i =0; i < num; i++) cout << letter;
}

int main() {
    int n, type, num;
    char letter;
    // cout << "Input total number of operations: ";
    cin >> n;
    for(int i =0; i<n; i++) {
        // cout << "Input type: ";
        cin >> type;
        switch(type) {
            case 1: {
                // cout << "Type 1, Input a num: ";
                cin >> num;
                cout << numberToLetterCipher(num);
                break;
            }
            case 2: {
                // cout << "Type 2, Input a letter in caps and then a num: ";
                cin >> letter >> num;
                cout << shifterCaesarCipher(letter, num);
                break;
            }
            case 3: {
                // cout << "Type 3, Input a letter in caps and then a num: ";
                cin >> letter >> num;
                repeatingLetterCipher(letter, num);
                break;
            }
        }
        //cout << "exiting switch statement and entering next operation loop" <<endl;
    }
    // cout << "exiting for loop and the program! Bye!" <<endl;
}