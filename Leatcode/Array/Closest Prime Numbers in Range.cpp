// Given two positive integers left and right, find the two integers num1 and num2 such that:

// left <= num1 < num2 <= right .
// Both num1 and num2 are prime numbers.
// num2 - num1 is the minimum amongst all other pairs satisfying the above conditions.
// Return the positive integer array ans = [num1, num2]. If there are multiple pairs satisfying these conditions, return the one with the smallest num1 value. If no such numbers exist, return [-1, -1].

// Example 1:

// Input: left = 10, right = 19
// Output: [11,13]
// Explanation: The prime numbers between 10 and 19 are 11, 13, 17, and 19.
// The closest gap between any pair is 2, which can be achieved by [11,13] or [17,19].
// Since 11 is smaller than 17, we return the first pair.
// Example 2:

// Input: left = 4, right = 6
// Output: [-1,-1]
// Explanation: There exists only one prime number in the given range, so the conditions cannot be satisfied.

// Constraints:

// 1 <= left <= right <= 10^6

#include <bits/stdc++.h>
using namespace std;
class Solution
{
private:
    bool isPrime(int p)
    {
        if (p <= 1)
            return false;
        else
        {
            for (int i = 2; i <= int(sqrt(p)); i++)
            {
                if (p % i == 0)
                    return false;
            }
            return true;
        }
    }

public:
    vector<int> closestPrimes(int left, int right)
    {
        int num1 = -1, num2 = -1;
        int diff = INT_MAX, p1 = 0, p2 = 0;
        for (int i = left; i <= right; i++)
        {
            bool prime = isPrime(i);
            if (prime)
            {
                if (p1 == 0)
                    p1 = i;
                else
                {
                    p2 = i;
                    int gap = p2 - p1;
                    if (gap < diff)
                    {
                        if (gap <= 2)
                            return {p1, p2};
                        num1 = p1;
                        num2 = p2;
                    }
                    p1 = p2;
                    p2 = 0;
                }
            }
        }
        return {num1, num2};
    }
};