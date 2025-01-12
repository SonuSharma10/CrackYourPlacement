// Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

// Example 1:

// Input: x = 2.00000, n = 10
// Output: 1024.00000
// Example 2:

// Input: x = 2.10000, n = 3
// Output: 9.26100
// Example 3:

// Input: x = 2.00000, n = -2
// Output: 0.25000
// Explanation: 2-2 = 1/22 = 1/4 = 0.25

// Constraints:

// -100.0 < x < 100.0
// -2^31 <= n <= 2^31-1
// n is an integer.
// Either x is not zero or n > 0.
// -10^4 <= xn <= 10^4

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    double myPow(double x, int n)
    {
        long int pow = n;
        bool sign = false;
        if (pow < 0)
        {
            sign = true;
            pow = -pow;
        }
        double ans = 1.0;
        while (pow > 0)
        {

            if (pow & 1)
                ans *= x;
            x = x * x;
            pow = pow >> 1;
        }
        return sign ? 1.0 / ans : ans;
    }
};