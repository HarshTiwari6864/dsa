class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int set=0;
        int ans=0;
        while(set<nums.size()){
            ans+=nums[set];
            set=set+2;
        }
        return ans;
    }
};

/*https://leetcode.com/problems/array-partition/*/