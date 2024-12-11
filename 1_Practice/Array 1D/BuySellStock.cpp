#include <iostream>
using namespace std;

int buySellStock(int *arr, int n)
{
    int idx = 0, profit = 0, maxProfit = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[idx] > arr[i])
        {
            idx = i;
            continue;
        }
        else
        {
            profit = arr[i] - arr[idx];
            maxProfit = max(profit, maxProfit);
        }
    }
    return maxProfit;
}

int main()
{
    int arr[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(arr) / sizeof(int);

    int profit = buySellStock(arr, n);
    cout << "Max Profit can be : " << profit << endl;
}