#include <iostream>
using namespace std;

// source rod to target rod using spare rod
// Let the biggest disk be numbered n and the smallest one 1
void solveTowerOfHanoi(int n, char source, char target, char spare) {
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << target << endl; //base case
        return;
    }

    // Move n-1 disks from 'source' rod to 'spare' rod using 'target' as spare
    solveTowerOfHanoi(n - 1, source, spare, target);

    // Move the nth disk from 'source' rod to 'target' rod
    cout << "Move disk " << n << " from " << source << " to " << target << endl;

    // Move the n-1 disks from 'spare' rod to 'target' rod using 'source' as spare
    solveTowerOfHanoi(n - 1, spare, target, source);
}

int main() {
    int n; 
    cout << "Enter the number of disks: ";
    cin >> n;

    solveTowerOfHanoi(n, 'A', 'C', 'B'); // 'A' is source, 'C' is target, 'B' is spare
    return 0;
}