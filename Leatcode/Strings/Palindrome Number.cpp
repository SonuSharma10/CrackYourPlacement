// Given an integer x, return true if x is a
// palindrome
// , and false otherwise.

// Example 1:

// Input: x = 121
// Output: true
// Explanation: 121 reads as 121 from left to right and from right to left.
// Example 2:

// Input: x = -121
// Output: false
// Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
// Example 3:

// Input: x = 10
// Output: false
// Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

// Follow up: Could you solve it without converting the integer to a string?

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        vector<int> num2;
        // without converting  into string
        if (x < 0)
            return 0;
        else

            while (x > 0)
            {
                num2.push_back(x % 10);
                x /= 10;
            }

        for (int i = 0; i < num2.size() / 2; i++)
        {
            if (num2[i] != num2[num2.size() - i - 1])
                return 0;
        }
        return 1;
    }
};