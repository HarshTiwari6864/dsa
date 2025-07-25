class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>expected;
        int count=0;
        for(int i=0;i<heights.size();i++){
            expected.push_back(heights[i]);
        }
        sort(expected.begin(),expected.end());
        for(int i=0;i<heights.size();i++){
            if(expected[i]!=heights[i]){
                count++;
            }
        }
        return count;
        
    }
};
/*https://leetcode.com/problems/height-checker/*/