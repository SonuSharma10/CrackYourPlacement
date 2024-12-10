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

int InsertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int current = i;
        for (int j = i - 1; j >= 0; j--)
        {

            if (arr[j] > arr[current])
            {
                swap(arr[j], arr[current]);
                current = j;
            }
        }
    }
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(int);
    InsertionSort(arr, n);
    print(arr, n);
}