// You are given an integer matrix isWater of size m x n that represents a map of land and water cells.

// If isWater[i][j] == 0, cell (i, j) is a land cell.
// If isWater[i][j] == 1, cell (i, j) is a water cell.
// You must assign each cell a height in a way that follows these rules:

// The height of each cell must be non-negative.
// If the cell is a water cell, its height must be 0.
// Any two adjacent cells must have an absolute height difference of at most 1. A cell is adjacent to another cell if the former is directly north, east, south, or west of the latter (i.e., their sides are touching).
// Find an assignment of heights such that the maximum height in the matrix is maximized.

// Return an integer matrix height of size m x n where height[i][j] is cell (i, j)'s height. If there are multiple solutions, return any of them.

// Example 1:

// Input: isWater = [[0,1],[0,0]]
// Output: [[1,0],[2,1]]
// Explanation: The image shows the assigned heights of each cell.
// The blue cell is the water cell, and the green cells are the land cells.
// Example 2:

// Input: isWater = [[0,0,1],[1,0,0],[0,0,0]]
// Output: [[1,1,0],[0,1,1],[1,2,2]]
// Explanation: A height of 2 is the maximum possible height of any assignment.
// Any height assignment that has a maximum height of 2 while still meeting the rules will also be accepted.

// Constraints:

// m == isWater.length
// n == isWater[i].length
// 1 <= m, n <= 1000
// isWater[i][j] is 0 or 1.
// There is at least one water cell.

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> highestPeak(vector<vector<int>> &isWater)
    {
        int row = isWater.size();
        int col = isWater[0].size();
        vector<vector<int>> ans(row, vector<int>(col, row * col));
        // top and Left pass
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                // Fix the water Cell to 0
                if (isWater[i][j])
                {
                    ans[i][j] = 0;
                }
                // top and left pass
                else
                {
                    if (i > 0)
                    {
                        ans[i][j] = min(ans[i][j], ans[i - 1][j] + 1);
                    }
                    if (j > 0)
                    {
                        ans[i][j] = min(ans[i][j], ans[i][j - 1] + 1);
                    }
                }
            }
        }

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }

        // bottom and right pass
        for (int i = row - 1; i >= 0; i--)
        {
            for (int j = col - 1; j >= 0; j--)
            {
                // bottom and right pass
                if (i < row - 1)
                {
                    ans[i][j] = min(ans[i][j], ans[i + 1][j] + 1);
                }
                if (j < col - 1)
                {
                    ans[i][j] = min(ans[i][j], ans[i][j + 1] + 1);
                }
            }
        }

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }

        return ans;
    }
};
