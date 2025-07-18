class Solution {

    public:
        int lengthOfLastWord(string s) {
            int length = 0;
            bool counting = false;
            
            for (int i = s.length() - 1; i >= 0; i--) {
                if (s[i] != ' ') {
                    counting = true;
                    length++;
                }
                else if (counting) {
                    break;
                }
            }
            
            return length;
        }
    };

    /*https://leetcode.com/problems/length-of-last-word/description/
    Given a string s consisting of words and spaces, return the length of the last word in the string.

A word is a maximal substring consisting of non-space characters only.*/