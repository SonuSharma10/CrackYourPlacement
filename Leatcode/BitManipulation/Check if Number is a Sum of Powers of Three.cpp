// Given an integer n, return true if it is possible to represent n as the sum of distinct powers of three. Otherwise, return false.

// An integer y is a power of three if there exists an integer x such that y == 3x.

// Example 1:

// Input: n = 12
// Output: true
// Explanation: 12 = 31 + 32
// Example 2:

// Input: n = 91
// Output: true
// Explanation: 91 = 30 + 32 + 34
// Example 3:

// Input: n = 21
// Output: false

// Constraints:

// 1 <= n <= 10^7

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool checkPowersOfThree(int n)
    {
        string base3 = "";
        int bit = 0;
        while (n)
        {
            bit = n % 3;
            base3 = to_string(bit) + base3;
            n = n / 3;
        }
        bool ans = true;
        for (auto i : base3)
        {
            if (i == '2')
            {
                ans = false;
                break;
            }
        }
        return ans;
    }
};