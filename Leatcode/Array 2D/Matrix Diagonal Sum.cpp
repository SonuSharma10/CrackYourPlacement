// Given a square matrix mat, return the sum of the matrix diagonals.

// Only include the sum of all the elements on the primary diagonal and all the elements on the secondary diagonal that are not part of the primary diagonal.

// Example 1:

// Input: mat = [[1,2,3],
//               [4,5,6],
//               [7,8,9]]
// Output: 25
// Explanation: Diagonals sum: 1 + 5 + 9 + 3 + 7 = 25
// Notice that element mat[1][1] = 5 is counted only once.
// Example 2:

// Input: mat = [[1,1,1,1],
//               [1,1,1,1],
//               [1,1,1,1],
//               [1,1,1,1]]
// Output: 8
// Example 3:

// Input: mat = [[5]]
// Output: 5

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int diagonalSum(vector<vector<int>> &mat)
    {
        int row = mat[0].size();
        int p_sum = 0, s_sum = 0;
        for (int i = 0; i < row; i++)
        {
            p_sum += mat[i][i];
        }
        for (int i = 0; i < row; i++)
        {
            s_sum += mat[i][row - i - 1];
        }

        int total = p_sum + s_sum;
        if (row % 2 != 0)
        {
            int mid = row / 2;
            total = total - mat[mid][mid];
        }
        return total;
    }
};