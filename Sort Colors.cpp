// Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

// You must solve this problem without using the library's sort function.

 

// Example 1:

// Input: nums = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]
// Example 2:

// Input: nums = [2,0,1]
// Output: [0,1,2]

class Solution {


    int partition (vector<int>& nums,int low, int high){
        int i = low-1;
        int pivot = nums[high];

        for (int j = low; j<high;j++){
            if(nums[j]<=pivot){
                i++;
                swap(nums[i],nums[j]);

            }
        }
        swap(nums[i+1],nums[high]);
        return (i+1);

    }

    void quicksort(vector<int>& nums, int low, int high){
        if(low<high){
        int pt = partition(nums,low,high);

        quicksort(nums, low, pt-1);
        quicksort(nums, pt+1,high);
        }
    }

public:
    void sortColors(vector<int>& nums) {
        quicksort(nums,0,nums.size()-1);
        for(int num : nums){
            cout<<num<<" ";
        }
    }
};