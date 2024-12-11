// 42. Trapping Rain Water

// Given n non - negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

// Example 1:
// Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
// Output: 6
// Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.
// Example 2:

// Input: height = [4,2,0,3,2,5]
// Output: 9

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int trap(vector<int> &height)
    {
        int totalwater = 0;
        int n = height.size();
        int leftMax[n], rightMax[n];
        int rightIdx;
        leftMax[0] = height[0];
        rightMax[n - 1] = height[n - 1];
        for (int i = 1; i < n; i++)
        {
            rightIdx = n - i - 1;

            leftMax[i] = max(leftMax[i - 1], height[i]);
            rightMax[rightIdx] = max(rightMax[rightIdx + 1], height[rightIdx]);
        }

        for (int i = 0; i < n; i++)
        {
            totalwater += min(leftMax[i], rightMax[i]) - height[i];
        }

        return totalwater;
    }
};