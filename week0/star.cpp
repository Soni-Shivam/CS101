#include <iostream>
#include <simplecpp>

using namespace std;
int main() {
    turtleSim();
    for (int i=0; i<30; i++) {
        forward(i*30);
        right(144);
    }
    getClick();
}