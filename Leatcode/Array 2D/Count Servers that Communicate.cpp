// You are given a map of a server center, represented as a m * n integer matrix grid, where 1 means that on that cell there is a server and 0 means that it is no server. Two servers are said to communicate if they are on the same row or on the same column.

// Return the number of servers that communicate with any other server.

// Example 1:

// Input: grid = [[1,0],[0,1]]
// Output: 0
// Explanation: No servers can communicate with others.
// Example 2:

// Input: grid = [[1,0],[1,1]]
// Output: 3
// Explanation: All three servers can communicate with at least one other server.
// Example 3:

// Input: grid = [[1,1,0,0],[0,0,1,0],[0,0,1,0],[0,0,0,1]]
// Output: 4
// Explanation: The two servers in the first row can communicate with each other. The two servers in the third column can communicate with each other. The server at right bottom corner can't communicate with any other server.

// Constraints:

// m == grid.length
// n == grid[i].length
// 1 <= m <= 250
// 1 <= n <= 250
// grid[i][j] == 0 or 1

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countServers(vector<vector<int>> &grid)
    {
        int row = grid.size();
        int col = grid[0].size();
        vector<int> rowpc(row, 0);
        vector<int> colpc(col, 0);
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (grid[i][j])
                {
                    rowpc[i]++;
                }
            }
        }
        for (int i = 0; i < col; i++)
        {
            for (int j = 0; j < row; j++)
            {
                if (grid[j][i])
                {
                    colpc[i]++;
                }
            }
        }
        for (int i = 0; i < row; i++)
        {
            cout << rowpc[i] << " ";
        }
        for (int i = 0; i < col; i++)
        {
            cout << colpc[i] << " ";
        }

        int count = 0;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (grid[i][j])
                {
                    if (rowpc[i] > 1 || colpc[j] > 1)
                    {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};