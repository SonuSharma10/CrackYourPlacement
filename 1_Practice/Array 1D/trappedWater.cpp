#include <iostream>
using namespace std;

// Not Working
/*
int maxWater(int start, int end, int minHeight, int *arr)
{
    int diff = end - (start + 1);
    cout << start << " " << end << " " << minHeight << endl;
    if (diff == 0)
    {
        return 0;
    }
    else
    {
        int area = minHeight * diff;
        for (int i = start + 1; i < end; i++)
        {
            area -= arr[i];
            cout << "Area: " << area << endl;
        }
        return area;
    }
}

int totalwater(int *arr, int n)
{
    int idx = 0, water = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] < arr[i])
        {
            water += maxWater(idx, i, min(arr[idx], arr[i]), arr);
            idx = i;

            cout << "water: " << water << endl;
        }
    }
    return water;
}
*/

void printArr(int *arr)
{
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << ",";
    }
    cout << endl;
}

// correct approach
int totalwater(int *arr, int n)
{
    int totalwater = 0;
    int leftMax[n], rightMax[n];
    int rightIdx;
    leftMax[0] = arr[0];
    rightMax[n - 1] = arr[n - 1];
    for (int i = 1; i < n; i++)
    {
        rightIdx = n - i - 1;

        leftMax[i] = max(leftMax[i - 1], arr[i]);
        rightMax[rightIdx] = max(rightMax[rightIdx + 1], arr[rightIdx]);
    }

    for (int i = 0; i < n; i++)
    {
        totalwater += min(leftMax[i], rightMax[i]) - arr[i];
    }

    return totalwater;
}

int main()
{

    int arr[] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(arr) / sizeof(int);

    int trappedWater = totalwater(arr, n);
    cout << trappedWater;
}