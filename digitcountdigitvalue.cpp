class Solution {
public:
    bool digitCount(string num) {
        unordered_map<int,int> mp;
        for(auto x:num)
            mp[x-'0']++;
        for(int i=0;i<num.size();i++){
            if(num[i]-'0' != mp[i])
                return false;
        }
        return true;
    }
};


/*https://leetcode.com/problems/check-if-number-has-equal-digit-count-and-digit-value/description/

You are given a 0-indexed string num of length n consisting of digits.

Return true if for every index i in the range 0 <= i < n, the digit i occurs num[i] times in num, otherwise return false.

 */