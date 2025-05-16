#include <iostream>
#include <cmath>
using namespace std;

char shifterCaesarCipher(char letter, int num) {
    int n = 'A' -1 + (26- (letter - 'A')%26)-num;
    return char(n);
}
int main() {
  int k,n;
  char letter;
  int num=1, den=1;
  cin >> letter >> num;
  cout << shifterCaesarCipher(letter, num) << endl;

}