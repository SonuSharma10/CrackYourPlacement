// Given a string s and an integer k, return true if you can use all the characters in s to construct k palindrome strings or false otherwise.

// Example 1:

// Input: s = "annabelle", k = 2
// Output: true
// Explanation: You can construct two palindromes using all characters in s.
// Some possible constructions "anna" + "elble", "anbna" + "elle", "anellena" + "b"
// Example 2:

// Input: s = "leetcode", k = 3
// Output: false
// Explanation: It is impossible to construct 3 palindromes using all the characters of s.
// Example 3:

// Input: s = "true", k = 4
// Output: true
// Explanation: The only possible solution is to put each character in a separate string.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canConstruct(string s, int k)
    {
        if (s.length() == k)
            return true;

        int n = s.length();
        int alpha[26] = {0};
        for (int i = 0; i < n; i++)
        {
            int chars = s[i] - 'a';
            alpha[chars]++;
        }

        int position = 0;
        int twos = 0;
        for (int i = 0; i < 26; i++)
        {
            if (alpha[i] >= 2)
            {
                while (alpha[i] > 1)
                {
                    twos++;
                    position++;
                    alpha[i] -= 2;
                }
            }
            if (alpha[i] == 0)
                continue;
            position++;
        }
        // cout<<twos<<" "<<position;
        int lowerLimit = position - twos;
        if (k <= s.length() && k >= lowerLimit)
            return true;
        else
            return false;
    }
};