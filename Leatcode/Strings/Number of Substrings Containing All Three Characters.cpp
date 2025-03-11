// Given a string s consisting only of characters a, b and c.

// Return the number of substrings containing at least one occurrence of all these characters a, b and c.

// Example 1:

// Input: s = "abcabc"
// Output: 10
// Explanation: The substrings containing at least one occurrence of the characters a, b and c are "abc", "abca", "abcab", "abcabc", "bca", "bcab", "bcabc", "cab", "cabc" and "abc" (again).
// Example 2:

// Input: s = "aaacb"
// Output: 3
// Explanation: The substrings containing at least one occurrence of the characters a, b and c are "aaacb", "aacb" and "acb".
// Example 3:

// Input: s = "abc"
// Output: 1

// Constraints:

// 3 <= s.length <= 5 x 10^4
// s only consists of a, b or c characters.

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool sub(vector<int> &abc)
    {
        return (abc[0] != 0 && abc[1] != 0 && abc[2] != 0);
    }
    int numberOfSubstrings(string s)
    {
        int start = 0, end = 0;
        int n = s.length();
        vector<int> abc(3, 0);
        int total = 0;
        while (end < n)
        {
            char temp = s[end];
            int p = temp - 'a';
            abc[p]++;
            if (sub(abc))
            {
                while (sub(abc))
                {
                    total += n - end;
                    temp = s[start];
                    p = temp - 'a';
                    abc[p]--;
                    start++;
                }
            }
            end++;
        }
        return total;
    }
};