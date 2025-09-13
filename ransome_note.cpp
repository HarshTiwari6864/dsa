class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mp;
        for(char c:magazine){
            mp[c]++;
        }
        for(char c: ransomNote){
            if(mp.find(c)!=mp.end()&&mp[c]>0){
                mp[c]--;
            }
            else{
                return false;
            }
        }
        return true;
        
    }
};

/*https://leetcode.com/problems/ransom-note/description/?envType=problem-list-v2&envId=counting*/