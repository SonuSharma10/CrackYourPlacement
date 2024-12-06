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

// kadane's Algorithm with TC of O(n);
int kadanesAlgorithm(int *arr, int n)
{
    int currSum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        cout << currSum << "\t";
        maxSum = max(currSum, maxSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    return maxSum;
}

int main()
{
    int arr[] = {2, -3, 5, 6, -3, 2};
    int n = sizeof(arr) / sizeof(int);

    int max = kadanesAlgorithm(arr, n);
    cout << "\n Maximum sum of subarray is : " << max << endl;
}