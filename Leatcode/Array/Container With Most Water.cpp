// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

// Find two lines that together with the x-axis form a container, such that the container contains the most water.

// Return the maximum amount of water a container can store.

// Notice that you may not slant the container.

// Example 1:

// Input: height = [1,8,6,2,5,4,8,3,7]
// Output: 49
// Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
// Example 2:

// Input: height = [1,1]
// Output: 1

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int n = height.size();
        int maximum = 0;
        int right = n - 1, left = 0;
        while (left < right)
        {
            int area = min(height[right], height[left]) * abs(right - left);
            maximum = max(maximum, area);
            if (height[right] > height[left])
                left++;
            else
                right--;
            // else if(height[right]< height[left])
            // right --;
            // else {
            //     if(height[right-1]< height[left+1]) left ++;
            //     else right --;
            // }
        }
        return maximum;
    }
};