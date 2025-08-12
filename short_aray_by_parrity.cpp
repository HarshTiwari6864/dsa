class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
       int low = 0;
       int high = nums.size()-1;
       while(low <= high){
        if(nums[low] % 2 == 0){
            low++;
        }
        else{
            swap(nums[low],nums[high]);
            high--;
            
        }
       }
       return nums;
    }
};


/*https://leetcode.com/problems/sort-array-by-parity/description/
Given an integer array nums, move all the even integers at the beginning of the array followed by all the odd integers.*/