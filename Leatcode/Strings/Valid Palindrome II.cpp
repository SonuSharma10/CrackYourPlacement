// Given a string s, return true if the s can be palindrome after deleting at most one character from it.

// Example 1:

// Input: s = "aba"
// Output: true
// Example 2:

// Input: s = "abca"
// Output: true
// Explanation: You could delete the character 'c'.
// Example 3:

// Input: s = "abc"
// Output: false

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool validPalindrome(string s)
    {
        int n = s.length();
        bool del = false;
        int left = 0;
        int right = n - 1;

        while (left < right)
        {
            if (s[left] == s[right])
            {
                left++;
                right--;
                continue;
            }
            else if (del)
                return 0;

            else if (s[left] != s[right])
            {
                if (s[left] == s[right - 1])
                {
                    if (s[left + 1] == s[right])
                    {
                        left++;
                        right--;
                    }
                    else
                    {
                        right -= 1;
                        del = true;
                    }
                }
                else if (s[left + 1] == s[right])
                {
                    left += 1;
                    // right--;
                    del = true;
                }
                else
                    return 0;
            }
        }

        return true;
    }
};