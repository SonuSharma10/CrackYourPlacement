#include <iostream>
using namespace std;

void subarray(int *arr, int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << "(";
            for (int sub = i; sub <= j; sub++)
            {
                cout << arr[sub];
            }
            cout << ")" << "\t";
        }
        cout << "\n";
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(int);

    subarray(arr, n);
}
