class Solution {
public:
    int balancedStringSplit(string s) {
        int x = 0;
        int count = 0;
        int n = s.size();
        for(int i=0;i<n;i++){
            if(s[i] == 'L') x++;
            if(s[i] == 'R') x--;
            if(x==0) count++;
        }
        return count;
    }
};
/*https://leetcode.com/problems/split-a-string-in-balanced-strings/description/?envType=problem-list-v2&envId=string*/