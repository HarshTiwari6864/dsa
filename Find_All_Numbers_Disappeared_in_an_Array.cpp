class Solution {
    public:
        vector<int> findDisappearedNumbers(vector<int>& nums) {
            unordered_map<int, int> mp;
            vector<int> ans;
    
            
            for (int num : nums) {
                mp[num]++;
            }
    
            
            for (int i = 1; i <= nums.size(); i++) {
                if (mp.find(i) == mp.end()) {
                    ans.push_back(i);


                    //ans me push
                }
            }
    
            return ans;
        }
    };

    
    /*https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
    Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.*/