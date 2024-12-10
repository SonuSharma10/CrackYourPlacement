#include <iostream>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int CountSort(int arr[], int n, int countSize)
{
    int count[countSize] = {0};

    for (int i = 0; i < n; i++)
    {
        // int idx = arr[i];
        count[arr[i]]++;
    }
    int idx = 0;
    for (int i = 0; i < countSize; i++)
    {
        while (count[i] > 0)
        {
            arr[idx] = i;
            idx++;
            count[i]--;
        }
    }
}

int main()
{
    int arr[] = {3, 3, 4, 1, 2, 6, 5, 5};
    int n = sizeof(arr) / sizeof(int);
    int max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    CountSort(arr, n, max + 1);
    print(arr, n);
}