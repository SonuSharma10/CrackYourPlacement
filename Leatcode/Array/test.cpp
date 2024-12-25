#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        vector<int> arr;
        int right = n, top = n - 1, left = n - 2, bottom = n - 1;

        while (top > 0)
        {
            int row = n - 1, col = n - 1;
            int newrow = n - 1, newcol = n - 1;

            for (int i = 0; i < bottom; i++)
            {
                arr.push_back(matrix[row--][col]);
            }
            row++;
            for (int i = 0; i < left; i++)
            {
                matrix[newrow--][newcol] = matrix[row][col--];
            }
            col++, newrow++;
            for (int i = 0; i < top; i++)
            {
                matrix[newrow][newcol--] = matrix[row++][col];
            }
            row--, newcol++;
            for (int i = 0; i < right; i++)
            {
                matrix[newrow++][newcol] = matrix[row][col++];
            }
            col--, newrow--;
            int idx = 0;
            for (int i = 0; i < bottom; i++)
            {
                matrix[newrow][newcol++] = arr[idx++];
            }

            n -= 2;
            right = n, top = n - 1, left = n - 2, bottom = n - 1;
            arr.clear();
        }
    }
};

void printMatrix(const vector<vector<int>> &matrix)
{
    for (const auto &row : matrix)
    {
        for (int val : row)
        {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    cout << "Original Matrix:" << endl;
    printMatrix(matrix);

    Solution sol;
    sol.rotate(matrix);

    cout << "\nRotated Matrix:" << endl;
    printMatrix(matrix);

    return 0;
}
