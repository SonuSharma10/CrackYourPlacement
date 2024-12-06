#include <iostream>
#include <climits>
using namespace std;

// brute force method with TC of O(n^3)
int maxSumSubarray(int *arr, int n)
{
    int sums = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int total = 0;
            for (int sum = i; sum <= j; sum++)
            {
                total += arr[sum];
            }
            cout << total << "\t";
            sums = max(total, sums);
        }
        cout << "\n";
    }
    return sums;
}

// Optimised with TC of O(n^2)
int maxSumSubarray1(int *arr, int n)
{
    int sums = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int total = 0;
        for (int j = i; j < n; j++)
        {
            total += arr[j];
            sums = max(sums, total);
            cout << total << "\t";
        }
        cout << "\n";
    }
    return sums;
}

int main()
{
    int arr[] = {1, -1, 1, -1, 1, -2, 1};
    int n = sizeof(arr) / sizeof(int);

    int max = maxSumSubarray1(arr, n);
    cout << "Maximum sum of subarray is : " << max;
}