// You are given an m x n integer matrix matrix with the following two properties:

// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target, return true if target is in matrix or false otherwise.

// You must write a solution in O(log(m * n)) time complexity.

// Example 1:

// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
// Output: true
// Example 2:

// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
// Output: false

// Constraints:

// m == matrix.length
// n == matrix[i].length
// 1 <= m, n <= 100
// -104 <= matrix[i][j], target <= 104

// This is using the concept of binary search and the time complexity is O(n*log(m))
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int m = matrix[0].size();
        int n = matrix.size();
        // bool have = false;
        // cout<<m<<" "<<n;

        for (int i = 0; i < n; i++)
        {
            int low = 0, high = m - 1;
            int mid = low + (high - low) / 2;
            while (low <= high)
            {

                if (matrix[i][mid] == target)
                    return true;
                else if (matrix[i][mid] > target)
                    high = mid - 1;
                else
                    low = mid + 1;
                mid = low + (high - low) / 2;
            }
        }
        return false;
    }
};