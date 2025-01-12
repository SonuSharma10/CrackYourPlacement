// A parentheses string is a non-empty string consisting only of '(' and ')'. It is valid if any of the following conditions is true:

// It is ().
// It can be written as AB (A concatenated with B), where A and B are valid parentheses strings.
// It can be written as (A), where A is a valid parentheses string.
// You are given a parentheses string s and a string locked, both of length n. locked is a binary string consisting only of '0's and '1's. For each index i of locked,

// If locked[i] is '1', you cannot change s[i].
// But if locked[i] is '0', you can change s[i] to either '(' or ')'.
// Return true if you can make s a valid parentheses string. Otherwise, return false.

// Example 1:

// Input: s = "))()))", locked = "010100"
// Output: true
// Explanation: locked[1] == '1' and locked[3] == '1', so we cannot change s[1] or s[3].
// We change s[0] and s[4] to '(' while leaving s[2] and s[5] unchanged to make s valid.
// Example 2:

// Input: s = "()()", locked = "0000"
// Output: true
// Explanation: We do not need to make any changes because s is already valid.
// Example 3:

// Input: s = ")", locked = "0"
// Output: false
// Explanation: locked permits us to change s[0].
// Changing s[0] to either '(' or ')' will not make s valid.

// Constraints:

// n == s.length == locked.length
// 1 <= n <= 105
// s[i] is either '(' or ')'.
// locked[i] is either '0' or '1'.

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool canBeValid(string s, string locked)
    {
        int n = s.length();
        if (n & 1)
            return 0;
        if ((s[0] == ')' && locked[0] == '1') || (s[n - 1] == '(' && locked[n - 1] == '1'))
            return 0;

        stack<int> fixed, assume;
        for (int i = 0; i < n; i++)
        {
            if (locked[i] == '0')
            {
                assume.push(i);
            }
            else
            {
                if (s[i] == '(')
                    fixed.push(i);
                else
                {
                    if (s[i] == ')' && !fixed.empty())
                    {
                        fixed.pop();
                    }
                    else if (s[i] == ')' && !assume.empty())
                    {
                        assume.pop();
                    }
                    else
                        return 0;
                }
            }
        }
        while (!fixed.empty() && !assume.empty() &&
               fixed.top() < assume.top())
        {
            fixed.pop();
            assume.pop();
        }

        if (fixed.empty())
            return true;
        else
            return false;
    }
};

// class Solution {
// public:
//     bool canBeValid(string s, string locked) {
//         int left = 0, right = 0, free = 0;
//         int n = s.size();
//         if((n % 2) != 0)
//             return false;
//         for(int i = 0; i < n; i++) {
//             if(locked[i] == '0')
//                 free++;
//             else if(s[i] == '(')
//                 left++;
//             else
//                 right++;
//             if(right - left > free)
//                 return false;
//         }
//         left = right = free = 0;

//         for(int i = n - 1; i >= 0; i--) {
//             if(locked[i] == '0')
//                 free++;
//             else if(s[i] == '(')
//                 left++;
//             else
//                 right++;
//             if(left - right > free)
//                 return false;
//         }
//         return true;
//     }
// };