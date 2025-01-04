// Given a string s, return the number of unique palindromes of length three that are a subsequence of s.

// Note that even if there are multiple ways to obtain the same subsequence, it is still only counted once.

// A palindrome is a string that reads the same forwards and backwards.

// A subsequence of a string is a new string generated from the original string with some characters (can be none) deleted without changing the relative order of the remaining characters.

// For example, "ace" is a subsequence of "abcde".

// Example 1:

// Input: s = "aabca"
// Output: 3
// Explanation: The 3 palindromic subsequences of length 3 are:
// - "aba" (subsequence of "aabca")
// - "aaa" (subsequence of "aabca")
// - "aca" (subsequence of "aabca")
// Example 2:

// Input: s = "adc"
// Output: 0
// Explanation: There are no palindromic subsequences of length 3 in "adc".
// Example 3:

// Input: s = "bbcbaba"
// Output: 4
// Explanation: The 4 palindromic subsequences of length 3 are:
// - "bbb" (subsequence of "bbcbaba")
// - "bcb" (subsequence of "bbcbaba")
// - "bab" (subsequence of "bbcbaba")
// - "aba" (subsequence of "bbcbaba")

// Constraints:

// 3 <= s.length <= 10^5
// s consists of only lowercase English letters.

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countPalindromicSubsequence(string s)
    {
        int len = s.length(), count = 0;

        unordered_set<char> visited;
        unordered_set<char> done;

        for (int i = 0; i < len - 2; i++)
        {
            if (i > 0 && done.find(s[i]) != done.end())
                continue;
            done.insert(s[i]);
            int right = len - 1;
            for (int j = right; j > i; j--)
            {
                if (s[i] == s[j])
                {
                    j--;
                    while (i < j)
                    {
                        if (visited.find(s[j]) == visited.end())
                        {
                            count++;
                            visited.insert(s[j]);
                        }
                        j--;
                    }
                    visited.clear();
                }
            }
            if (done.size() == 26)
                return count; // all are done
        }
        return count;
    }
};