#include <simplecpp>
#include<time.h>

int main() {
    srand(time(NULL));
    int N, heads=0, tails=0, x;
    cin >> N;
    for(int i=0; i<N; i++){
        x = (rand() % 2); // Generates a integer number in range 0 to 1
        if (x == 0) {
            heads++;
        } else {
            tails++;
        }
    }
    cout << "H: " << heads << " T: " << tails << endl;
}