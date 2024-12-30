// Two strings are considered close if you can attain one from the other using the following operations:

// Operation 1: Swap any two existing characters.
// For example, abcde -> aecdb
// Operation 2: Transform every occurrence of one existing character into another existing character, and do the same with the other character.
// For example, aacabb -> bbcbaa (all a's turn into b's, and all b's turn into a's)
// You can use the operations on either string as many times as necessary.

// Given two strings, word1 and word2, return true if word1 and word2 are close, and false otherwise.

// Example 1:

// Input: word1 = "abc", word2 = "bca"
// Output: true
// Explanation: You can attain word2 from word1 in 2 operations.
// Apply Operation 1: "abc" -> "acb"
// Apply Operation 1: "acb" -> "bca"
// Example 2:

// Input: word1 = "a", word2 = "aa"
// Output: false
// Explanation: It is impossible to attain word2 from word1, or vice versa, in any number of operations.
// Example 3:

// Input: word1 = "cabbba", word2 = "abbccc"
// Output: true
// Explanation: You can attain word2 from word1 in 3 operations.
// Apply Operation 1: "cabbba" -> "caabbb"
// Apply Operation 2: "caabbb" -> "baaccc"
// Apply Operation 2: "baaccc" -> "abbccc"

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool closeStrings(string word1, string word2)
    {
        if (word1.length() != word2.length())
            return 0;

        int n = word1.length();
        int arr1[27], arr2[27];
        for (int i = 0; i < n; i++)
        {
            arr1[word1[i] - 'a']++;
            arr2[word2[i] - 'a']++;
        }
        // to check that only those chars are there which are in both strings.
        for (int i = 0; i < 26; i++)
        {
            if (arr1[i] > 0)
            {
                if (arr2[i] > 0)
                    continue;
                else
                    return 0;
            }
        }

        // to match same value occurence chars and minus them in other array iff num.arr1 = num.arr2.
        for (int j = 0; j < 26; j++)
        {
            if (arr1[j] > 0)
            {
                int chars = arr1[j];
                for (int k = 0; k < 27; k++)
                {
                    if (k == 26)
                    {
                        return 0;
                    }
                    else
                    {
                        if (arr2[k] == chars)
                        {
                            arr2[k] = 0;
                            break;
                        }
                    }
                }
            }
        }

        return 1;
    }
};