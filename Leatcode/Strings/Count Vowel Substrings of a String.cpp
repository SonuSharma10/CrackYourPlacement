// A substring is a contiguous (non-empty) sequence of characters within a string.

// A vowel substring is a substring that only consists of vowels ('a', 'e', 'i', 'o', and 'u') and has all five vowels present in it.

// Given a string word, return the number of vowel substrings in word.

// Example 1:

// Input: word = "aeiouu"
// Output: 2
// Explanation: The vowel substrings of word are as follows (underlined):
// - "aeiouu"
// - "aeiouu"
// Example 2:

// Input: word = "unicornarihan"
// Output: 0
// Explanation: Not all 5 vowels are present, so there are no vowel substrings.
// Example 3:

// Input: word = "cuaieuouac"
// Output: 7
// Explanation: The vowel substrings of word are as follows (underlined):
// - "cuaieuouac"
// - "cuaieuouac"
// - "cuaieuouac"
// - "cuaieuouac"
// - "cuaieuouac"
// - "cuaieuouac"
// - "cuaieuouac"

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countVowelSubstrings(string word)
    {
        int n = word.length();
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            unordered_map<char, int> vowels;
            if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
            {
                for (int j = i; j < n; j++)
                {
                    if (word[j] == 'a' || word[j] == 'e' || word[j] == 'i' || word[j] == 'o' || word[j] == 'u')
                    {
                        vowels[word[j]]++;
                        if (vowels.size() == 5)
                        {
                            count++;
                        }
                    }
                    else
                    {
                        vowels.clear();
                        break;
                    }
                }
            }
        }
        return count;
    }
};