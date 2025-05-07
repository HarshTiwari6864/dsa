class Solution {
    public:
        int scoreOfString(string s) {
            int sum = 0;
            for(int i = 0; i < s.size() - 1; i++) {
                sum += abs(s[i] - s[i+1]);
            }
            return sum;
        }
    };

    
    /*https://leetcode.com/problems/score-of-a-string/description/ 
    You are given a string s. The score of a string is defined as the sum of the absolute difference between the ASCII values of adjacent characters.

Return the score of s.*/

