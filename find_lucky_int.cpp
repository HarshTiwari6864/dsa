class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>mp;
        int maximum=-1;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        for(auto it:mp){
            if(it.first==it.second){
                maximum=max(maximum,it.second);
            }
        }
        return maximum;
    }
};
/*https://leetcode.com/problems/find-lucky-integer-in-an-array/*/