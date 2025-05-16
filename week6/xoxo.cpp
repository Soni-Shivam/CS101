#include <simplecpp>
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < i ; j++) cout << ' ';
        for (int j = 0; j < n - i ; j++) cout << ((j%2 ==0) ? 'O' : 'X');
        cout << endl;
    }
}