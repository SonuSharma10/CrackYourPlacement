// Given two strings s and t, return true if t is an
// anagram
//  of s, and false otherwise.

// Example 1:

// Input: s = "anagram", t = "nagaram"

// Output: true

// Example 2:

// Input: s = "rat", t = "car"

// Output: false

// Constraints:

// 1 <= s.length, t.length <= 5 * 104
// s and t consist of lowercase English letters.

// Follow up: What if the inputs contain Unicode characters? How would you adapt your solution to such a case?

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        int lens = s.length(), lent = t.length();
        if (lens != lent)
        {
            return 0;
        }
        // sorting s;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        cout << s << " " << t;

        for (int i = 0; i < lens; i++)
        {
            if (s[i] != t[i])
            {
                return 0;
            }
        }
        return 1;
    }
};