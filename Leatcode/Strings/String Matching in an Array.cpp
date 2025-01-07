// Given an array of string words, return all strings in words that is a substring of another word. You can return the answer in any order.

// A substring is a contiguous sequence of characters within a string

// Example 1:

// Input: words = ["mass","as","hero","superhero"]
// Output: ["as","hero"]
// Explanation: "as" is substring of "mass" and "hero" is substring of "superhero".
// ["hero","as"] is also a valid answer.
// Example 2:

// Input: words = ["leetcode","et","code"]
// Output: ["et","code"]
// Explanation: "et", "code" are substring of "leetcode".
// Example 3:

// Input: words = ["blue","green","bu"]
// Output: []
// Explanation: No string of words is substring of another string.

// Constraints:

// 1 <= words.length <= 100
// 1 <= words[i].length <= 30
// words[i] contains only lowercase English letters.
// All the strings of words are unique.

#include <bits/stdc++.h>
using namespace std;
bool smallSort(string &a, string &b)
{
    return a.length() < b.length(); // Corrected with semicolon
}

class Solution
{
public:
    vector<string> stringMatching(vector<string> &words)
    {
        // Method 1 Using Brute force method;

        //     int n = words.size();
        //     vector<string> ans;
        //     for (int i = 0; i < n; i++) {
        //         for (int j = 0; j < n; j++) {
        //             if (i == j || words[i].length() > words[j].length())
        //                 continue;
        //             bool sub = false;
        //             string small = words[i], big = words[j];
        //             for (int k = 0; k <= big.length() - small.length(); k++) {
        //                 if (small[0] != big[k])
        //                     continue;
        //                 else {

        //                     int idx = 0, cur = k;
        //                     while (small[idx] == big[cur] && idx < small.length()) {
        //                         if (idx + 1 == small.length()) {
        //                             ans.push_back(small);
        //                             sub = true;
        //                         }
        //                         idx++;
        //                         cur++;
        //                     }
        //                     if (sub)
        //                         break;
        //                 }
        //             }
        //             if (sub)
        //                 break;
        //         }
        //     }
        //     return ans;
        // }

        // Method 2 using Sort Method and brute force

        int n = words.size();
        vector<string> ans;

        // Sort words by length in descending order
        sort(words.begin(), words.end(), smallSort);
        for (int i = 0; i < n; i++)
        {
            bool sub = false;
            for (int j = i + 1; j < n; j++)
            {
                string small = words[i], big = words[j];
                for (int k = 0; k <= big.length() - small.length(); k++)
                {
                    if (small[0] != big[k])
                        continue;
                    else
                    {
                        int idx = 0, cur = k;
                        while (small[idx] == big[cur] && idx < small.length())
                        {
                            if (idx + 1 == small.length())
                            {
                                ans.push_back(small);
                                sub = true;
                            }
                            idx++;
                            cur++;
                        }
                        if (sub)
                            break;
                    }
                }
                if (sub)
                    break;
            }
        }

        return ans; // Placeholder return value
    }
};