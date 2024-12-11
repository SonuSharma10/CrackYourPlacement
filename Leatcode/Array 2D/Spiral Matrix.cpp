// Given an m x n matrix, return all elements of the matrix in spiral order.

// Example 1:
// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [1,2,3,6,9,8,7,4,5]

// Example 2:
// Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
// Output: [1,2,3,4,8,12,11,10,9,5,6,7]

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        int n = matrix[0].size();
        int m = matrix.size();

        vector<int> ans;
        int r = 0, c = -1;
        n++;
        while (true)
        {
            n--;
            if (n == 0 || m == 0)
                break;
            // increment n
            for (int i = 0; i < n; i++)
            {
                c++;
                ans.push_back(matrix[r][c]);
            }

            // cout << n<<" "<<m<<" "<< c<< " "<<r;
            m--;
            if (n == 0 || m == 0)
                break;
            // increment m
            for (int i = 0; i < m; i++)
            {
                r++;
                ans.push_back(matrix[r][c]);
            }

            n--;
            if (n == 0 || m == 0)
                break;
            // // decrement n
            for (int i = 0; i < n; i++)
            {
                c--;
                ans.push_back(matrix[r][c]);
            }

            m--;
            if (n == 0 || m == 0)
                break;

            // // decrement m
            for (int i = 0; i < m; i++)
            {
                r--;
                ans.push_back(matrix[r][c]);
            }
        }
        return ans;
    }
};