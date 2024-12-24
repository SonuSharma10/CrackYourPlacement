// Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

// Integers in each row are sorted in ascending from left to right.
// Integers in each column are sorted in ascending from top to bottom.

// Example 1:

// Input: matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]], target = 5
// Output: true
// Example 2:

// Input: matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]], target = 20
// Output: false

// Constraints:

// m == matrix.length
// n == matrix[i].length
// 1 <= n, m <= 300
// -109 <= matrix[i][j] <= 109
// All the integers in each row are sorted in ascending order.
// All the integers in each column are sorted in ascending order.
// -109 <= target <= 109

// This is using the concept of stairecase search and the time complexity is O(m+n)
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int m = matrix[0].size();
        int n = matrix.size();

        // for (int i = 0; i<n; i++){
        //     int low = 0, high = m-1;
        //     int mid = low + (high-low)/2;
        //     while(low<=high){
        //         if(matrix[i][mid]==target) return true;
        //         else if (matrix[i][mid]>target)
        //         high = mid-1;
        //         else low = mid+1;
        //         mid = low + (high-low)/2;
        //     }
        // }
        // return false;
        int row_side = 0, col_side = m - 1;

        while (row_side < n && col_side >= 0)
        {
            int element = matrix[row_side][col_side];
            if (element == target)
                return true;
            else if (element > target)
                col_side--;
            else
                row_side++;
        }

        return false;
    }
};