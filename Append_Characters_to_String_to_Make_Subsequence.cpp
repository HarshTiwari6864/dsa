class Solution {
public:
    int appendCharacters(string s, string t) {
        int i=0,j=0;
        while(i<s.length()&&j<t.length()){
            if(s[i]==t[j]){
                j++;
            }
            i++;
        }
        return t.length()-j;
        
    }
};
/*You are given two strings s and t consisting of only lowercase English letters.

Return the minimum number of characters that need to be appended to the end of s so that t becomes a subsequence of s.

A subsequence is a string that can be derived from another string by deleting some or no characters without changing the order of the remaining characters.*/

//we are using two pointer tech to check the no of char present in original set then we sub that from total length of sub string to get rest of the values