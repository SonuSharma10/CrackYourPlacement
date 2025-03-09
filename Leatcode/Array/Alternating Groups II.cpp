// There is a circle of red and blue tiles. You are given an array of integers colors and an integer k. The color of tile i is represented by colors[i]:

// colors[i] == 0 means that tile i is red.
// colors[i] == 1 means that tile i is blue.
// An alternating group is every k contiguous tiles in the circle with alternating colors (each tile in the group except the first and last one has a different color from its left and right tiles).

// Return the number of alternating groups.

// Note that since colors represents a circle, the first and the last tiles are considered to be next to each other.

// Example 1:

// Input: colors = [0,1,0,1,0], k = 3

// Output: 3

// Explanation:

// Alternating groups:

// Example 2:

// Input: colors = [0,1,0,0,1,0,1], k = 6

// Output: 2

// Explanation:

// Alternating groups:

// Example 3:

// Input: colors = [1,1,0,1], k = 4

// Output: 0

// Explanation:

// Constraints:

// 3 <= colors.length <= 10^5
// 0 <= colors[i] <= 1
// 3 <= k <= colors.length

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int numberOfAlternatingGroups(vector<int> &colors, int k)
    {
        bool sequence = false;
        int n = colors.size();
        int pivot = 0, pair = 0;
        int count = 1;
        for (int i = 0; i < (2 * n - 1); i++)
        {
            if (count == k)
            {
                sequence = true;
                break;
            }
            if (colors[i % n] == colors[(i + 1) % n])
            {
                pivot = (i + 1) % n;
                count = 1;
            }
            else
                count++;
        }
        if (sequence)
        {
            pair = 1;
            int right = (pivot + k - 1) % n;
            for (int i = 0; i < n - 1; i++)
            {
                if (count == k && colors[right] != colors[(right + 1) % n])
                {
                    pair++;
                }
                else if (colors[right] == colors[(right + 1) % n])
                {
                    count = 1;
                }
                else
                {
                    count++;
                    if (count == k)
                        pair++;
                }
                right = (right + 1) % n;
            }
        }
        return pair;
    }
};