#include <bits/stdc++.h>
using namespace std;

// initialize a string direction which represents all
// the directions.
string direction = "DLRU";
// arrays to represent change in rows and columns

int dr[4] = {1, 0, 0, -1};
int dc[4] = {0, -1, 1, 0};

// Function to check if cell(r, c) is inside the maze
// and unblocked
bool isValid(int r, int c, int n,vector<vector<int>> &maze)
{
    return r >= 0 && c >= 0 && r < n && c < n && maze[r][c];
}

// Function to get all valid paths
void findPath(int r, int c, vector<vector<int>> &maze, int n, vector<string> &ans, string &currentPath)
{

    // if we reach the bottom right cell of the matrix,
    // add the current path to ans and return
    if (r == n - 1 && c == n - 1)
    {
        ans.push_back(currentPath);
        return;
    }

    // Mark the current cell as blocked
    maze[r][c] = 0;

    for (int i = 0; i < 4; i++)
    {
        // find the next row based on the current row
        // (r) and the dr[] array
        int nextr = r + dr[i];
        // find the next column based on the current
        // column (c) and the dc[] array
        int nextc = c + dc[i];
        // check if the next cell is valid or not
        if (isValid(nextr, nextc, n, maze))
        {
            currentPath += direction[i];
            // Recursively call the solve function for
            // the next cell
            findPath(nextr, nextc, maze, n, ans,
                     currentPath);
            currentPath.pop_back();
        }
    }
    // Mark the current cell as unblocked
    maze[r][c] = 1;
}

int main()
{
    int n = 4;

    vector<vector<int>> maze = {{1, 0, 0, 0},
                                {1, 1, 0, 1},
                                {1, 1, 0, 0},
                                {0, 1, 1, 1}};

    // vector to store all the valid paths
    vector<string> result;

    // Store current Path
    string currentPath = "";

    // Function call to get all valid paths
    findPath(0, 0, maze, n, result, currentPath);

    if (result.size() == 0)
        cout << -1;
    else
        for (int i = 0; i < result.size(); i++)
            cout << result[i] << " ";
    cout << endl;

    return 0;
}
