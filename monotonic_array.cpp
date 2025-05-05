class Solution {
    public:
        bool isMonotonic(vector<int>& nums) {
            int n = nums.size();
            if (n == 1) return true;
    
            bool isInc = true;
            bool isDec = true;
    
            for (int i = 1; i < n; i++) {
                if (!isInc && !isDec) {
                    return false;
                }
    
                if (nums[i] < nums[i - 1]) {
                    isInc = false;
                }
                if (nums[i] > nums[i - 1]) {
                    isDec = false;
                }
            }
    
            return isInc || isDec;        
        }
    };




    /*https://leetcode.com/problems/monotonic-array/description/
    An array is monotonic if it is either monotone increasing or monotone decreasing.

An array nums is monotone increasing if for all i <= j, nums[i] <= nums[j]. An array nums is monotone decreasing if for all i <= j, nums[i] >= nums[j].

Given an integer array nums, return true if the given array is monotonic, or false otherwise.*/