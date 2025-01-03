#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int num = 0, mask = 1;
    int temp = n, i = 0;
    while (temp)
    {
        int bit = temp % 10;
        num = num + bit * mask;
        mask = mask * 2;
        temp /= 10;
    }
    cout << num << endl;
}