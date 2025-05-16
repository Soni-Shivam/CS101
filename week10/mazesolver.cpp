#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isSafe(int x, int y, vector<vector<int>>& maze, vector<vector<bool>>& visited, int n) {
    return (x >= 0 && y >= 0 && x < n && y < n &&
            maze[x][y] == 1 && !visited[x][y]);
}

void solveMaze(vector<vector<int>>& maze, int x, int y, vector<vector<bool>>& visited,
               string path, vector<string>& paths, int n) {
    // Destination reached
    if (x == n - 1 && y == n - 1) {
        paths.push_back(path);
        return;
    }

    visited[x][y] = true; // mark before exploring for this branch

    // Down
    if (isSafe(x + 1, y, maze, visited, n)) {
        solveMaze(maze, x + 1, y, visited, path + 'D', paths, n);
    }
    // Left
    if (isSafe(x, y - 1, maze, visited, n)) {
        solveMaze(maze, x, y - 1, visited, path + 'L', paths, n);
    }
    // Right
    if (isSafe(x, y + 1, maze, visited, n)) {
        solveMaze(maze, x, y + 1, visited, path + 'R', paths, n);
    }
    // Up
    if (isSafe(x - 1, y, maze, visited, n)) {
        solveMaze(maze, x - 1, y, visited, path + 'U', paths, n);
    }

    visited[x][y] = false; // Backtrack matlab ki mark it as done for the other adjacent branches.
}

int main() {
    vector<vector<int>> maze = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 1, 1},
        {1, 1, 1, 1}
    };

    int n = maze.size();
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    vector<string> paths;

    if (maze[0][0] == 1) {
        solveMaze(maze, 0, 0, visited, "", paths, n);
    }

    cout << "All paths from start to end:\n";
    for (string p : paths) {
        cout << p << endl;
    }

    return 0;
}
