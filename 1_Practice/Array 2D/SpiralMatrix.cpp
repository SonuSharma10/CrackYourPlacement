#include <iostream>
using namespace std;

void spiralOrder(int arr[][4], int row)
{
    int n = 4;
    int m = row;

    int ans[3 * 4] = {0};
    int r = 0, c = -1, j = 0;
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
            ans[j] = arr[r][c];
            j++;
        }

        // cout << n<<" "<<m<<" "<< c<< " "<<r;
        m--;
        if (n == 0 || m == 0)
            break;
        // increment m
        for (int i = 0; i < m; i++)
        {
            r++;
            ans[j] = arr[r][c];
            j++;
        }

        n--;
        if (n == 0 || m == 0)
            break;
        // // decrement n
        for (int i = 0; i < n; i++)
        {
            c--;
            ans[j] = arr[r][c];
            j++;
        }

        m--;
        if (n == 0 || m == 0)
            break;

        // // decrement m
        for (int i = 0; i < m; i++)
        {
            r--;
            ans[j] = arr[r][c];
            j++;
        }
    }
    for (int i = 0; i < 12; i++)
    {
        cout << ans[i] << " ";
    }
};

int main()
{
    int arr[3][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl
             << endl;
    }

    spiralOrder(arr, 3);
    return 0;
}
