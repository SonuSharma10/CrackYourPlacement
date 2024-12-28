// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

// Given a string s, return true if it is a palindrome, or false otherwise.

// Example 1:

// Input: s = "A man, a plan, a canal: Panama"
// Output: true
// Explanation: "amanaplanacanalpanama" is a palindrome.
// Example 2:

// Input: s = "race a car"
// Output: false
// Explanation: "raceacar" is not a palindrome.
// Example 3:

// Input: s = " "
// Output: true
// Explanation: s is an empty string "" after removing non-alphanumeric characters.
// Since an empty string reads the same forward and backward, it is a palindrome.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        string s_alnum = "";
        int n = s.length();
        for (auto &ch : s)
        {

            if (isalnum(ch))
            {
                ch = tolower(ch);
                s_alnum.push_back(ch);
            }
        }

        int len = s_alnum.length();

        for (int i = 0; i < len / 2; i++)
        {
            if (s_alnum[i] != s_alnum[len - i - 1])
                return false;
        }

        cout << s_alnum << endl;
        return true;
    }
};