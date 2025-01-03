// #include <iostream>
// #include <bitset>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mask = 1;
    for (int i = 31; i >= 0; i--) // for 32 bit integer
    {
        if (n & (mask << i))
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
    }
    cout << endl;

    // inbuilt function bitset
    string str = bitset<32>(n).to_string();
    cout << str << endl;

    // conversion of str to num
    int num = stoi(str);
    cout << num << endl;

    // using modulo to get the binary number
    int temp = n, i = 31;
    string bin = "";
    while (temp)
    {
        int bit = temp % 2;
        temp /= 2;
        i--;
        bin = to_string(bit) + bin;
    }
    cout << bin << endl;
    return 0;
}