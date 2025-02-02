// Given an m x n binary matrix mat, return the distance of the nearest 0 for each cell.

// The distance between two cells sharing a common edge is 1.

// Example 1:

// Input: mat = [[0,0,0],[0,1,0],[0,0,0]]
// Output: [[0,0,0],[0,1,0],[0,0,0]]
// Example 2:

// Input: mat = [[0,0,0],[0,1,0],[1,1,1]]
// Output: [[0,0,0],[0,1,0],[1,2,1]]

// Constraints:

// m == mat.length
// n == mat[i].length
// 1 <= m, n <= 10000
// 1 <= m * n <= 10000
// mat[i][j] is either 0 or 1.
// There is at least one 0 in mat.

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> updateMatrix(vector<vector<int>> &mat)
    {
        int row = mat.size();
        int col = mat[0].size();
        vector<vector<int>> ans(row, vector<int>(col, row * col));
        // top and left pass
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (!mat[i][j])
                    ans[i][j] = 0;
                else
                {
                    if (i > 0)
                        ans[i][j] = min(ans[i][j], ans[i - 1][j] + 1);
                    if (j > 0)
                        ans[i][j] = min(ans[i][j], ans[i][j - 1] + 1);
                }
            }
        }
        // pass of bottom and right
        for (int i = row - 1; i >= 0; i--)
        {
            for (int j = col - 1; j >= 0; j--)
            {
                if (i < row - 1)
                    ans[i][j] = min(ans[i][j], ans[i + 1][j] + 1);
                if (j < col - 1)
                    ans[i][j] = min(ans[i][j], ans[i][j + 1] + 1);
            }
        }
        return ans;
    }
};