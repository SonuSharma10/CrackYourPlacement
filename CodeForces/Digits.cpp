// Artem wrote the digit d
//  on the board exactly n!
//  times in a row. So, he got the number dddddd…ddd
//  (exactly n!
//  digits).

// Now he is curious about which odd digits from 1
//  to 9
//  divide the number written on the board.

// Input
// The first line contains a single integer t
//  (1≤t≤100
// ) — the number of test cases. The next t
//  test cases follow.

// Each test case consists of a single line containing two integers n
//  and d
//  (2≤n≤109
// , 1≤d≤9
// ).

// Output
// For each test case, output the odd digits in ascending order that divide the number written on the board.

// Example
// InputCopy
// 3
// 2 6
// 7 1
// 8 5
// OutputCopy
// 1 3
// 1 3 7 9
// 1 3 5 7 9

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int inp;
    cin >> inp;

    while (inp--)
    {
        int fact, num;
        cin >> fact >> num;
        cout << 1 << " ";
        if (num % 3 == 0 || fact >= 3)
            cout << 3 << " ";
        if (num % 5 == 0)
            cout << 5 << " ";
        if (num % 7 == 0 || fact >= 3)
            cout << 7 << " ";
        if (num % 9 == 0 || fact >= 6 || (num % 3 == 0 && fact >= 3))
            cout << 9 << " ";
    }
}
