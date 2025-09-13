class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> result;
        int n = nums.size();
        for (int num : nums) {
            mp[num]++;
        }

        for (auto &p : mp) {
            if (p.second > n / 3) {
                result.push_back(p.first);
            }
        }

        return result;
    }
};


/*https://leetcode.com/problems/majority-element-ii/description/?envType=problem-list-v2&envId=counting*/