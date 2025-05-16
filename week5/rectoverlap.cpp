#include <iostream>
using namespace std;

int getArea(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {
    // Calculate the coordinates of the overlapping rectangle
    int left = max(x1, x3);
    int right = min(x2, x4);
    int top = min(y1, y3);
    int bottom = max(y2, y4);

    // Check if there is an overlap
    if (left < right && top > bottom) {
        // Calculate and return the area of overlap
        return (right - left) * (top - bottom);
    }
    
    // No overlap
    return 0;
}

int main() {
    int x1, y1, x2, y2, x3, y3, x4, y4;

    // Input for the first rectangle
    cin >> x1 >> y1 >> x2 >> y2;

    // Input for the second rectangle
    cin >> x3 >> y3 >> x4 >> y4;

    // Calculate and output the overlapping area
    int result = getArea(x1, y1, x2, y2, x3, y3, x4, y4);
    cout << result << endl;

    return 0;
}

