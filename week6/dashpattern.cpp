
#include <simplecpp>
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < i ; j++) {
            cout << ' ';
        }
        cout << '|';
        for (int j = 0; j < n - i ; j++) {
            cout << '-';
        }
        cout << '|' << endl;
        for (int j = 0; j < n +1; j++) {
            cout << ' ';
        }
        cout << '|';
        for (int j = 0; j < n - i; j++) {
            cout << '-';
        }
        cout << '|' << endl;
    }
}