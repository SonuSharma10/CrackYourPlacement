// You are given two string arrays words1 and words2.

// A string b is a subset of string a if every letter in b occurs in a including multiplicity.

// For example, "wrr" is a subset of "warrior" but is not a subset of "world".
// A string a from words1 is universal if for every string b in words2, b is a subset of a.

// Return an array of all the universal strings in words1. You may return the answer in any order.

// Example 1:

// Input: words1 = ["amazon","apple","facebook","google","leetcode"], words2 = ["e","o"]
// Output: ["facebook","google","leetcode"]
// Example 2:

// Input: words1 = ["amazon","apple","facebook","google","leetcode"], words2 = ["l","e"]
// Output: ["apple","google","leetcode"]

// Constraints:

// 1 <= words1.length, words2.length <= 10000
// 1 <= words1[i].length, words2[i].length <= 10
// words1[i] and words2[i] consist only of lowercase English letters.
// All the strings of words1 are unique.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> wordSubsets(vector<string> &words1, vector<string> &words2)
    {

        vector<string> ans; // initialising final answer vector

        int n = words1.size();
        int n2 = words2.size();
        int alpha[26] = {0};
        static int alpha2[26];
        for (int i = 0; i < n2; i++)
        {
            string s = words2[i];
            int alpha2[26] = {0};
            for (auto ch : s)
            {
                int p = ch - 'a';
                alpha2[p]++;
                alpha[p] = max(alpha[p], alpha2[p]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            string s = words1[i];
            int alpha2[26] = {0};
            bool subset = true;
            for (auto ch : s)
            {
                int p = ch - 'a';
                alpha2[p]++;
            }
            for (int k = 0; k < 26; k++)
            {
                if (alpha[k] > alpha2[k])
                {
                    subset = false;
                    break;
                }
            }
            if (subset)
            {
                ans.push_back(s);
            }
        }
        return ans;
    }
};