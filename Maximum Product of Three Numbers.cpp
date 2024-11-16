// Given an integer array nums, find three numbers whose product is maximum and return the maximum product.

 

// Example 1:

// Input: nums = [1,2,3]
// Output: 6
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumProduct(vector<int>& nums) {

        int length = nums.size();
        int sum;
        for (int i = 0; i < length - 1; i++) {
            for (int j = 0; j < length - i - 1; j++) {
                if (nums[j] < nums[j + 1]) {
                    swap(nums[j], nums[j + 1]);
                }
            }
        }
        int sum1 = nums[0] * nums[1] * nums[2];
        int sum2 =  nums[length-1] * nums[length - 2] * nums[0];

        sum = max(sum1,sum2);

        cout << sum2 << endl;
        return sum;
    }
};