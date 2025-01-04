// Given two integers left and right that represent the range [left, right], return the bitwise AND of all numbers in this range, inclusive.

// Example 1:

// Input: left = 5, right = 7
// Output: 4
// Example 2:

// Input: left = 0, right = 0
// Output: 0
// Example 3:

// Input: left = 1, right = 2147483647
// Output: 0

// Constraints:

// 0 <= left <= right <= 2^31 - 1;

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int rangeBitwiseAnd(int left, int right)
    {
        // Time Limit Exceeded

        // int num = ~0;
        // for(int i=left; i<=right; i++){
        //     num = num & i;
        //     if(num == 0) return 0;
        //     if(i==INT_MAX) break;
        // }
        // return num;
        int count = 0;

        while (left > 0 && right > 0)
        {
            if (left == right && left > 0 && right > 0)
            {
                return (left << count);
            }
            count++;
            left = left >> 1;
            right = right >> 1;
        }
        return 0;
    }
};