
class Solution {
    public:
        bool checkOnesSegment(string s) {
             bool seenZero = false;
        for (size_t i = 1; i < s.size(); ++i) {
            if (s[i - 1] == '1' && s[i] == '0') {
                seenZero = true;
            }
            // If we see a '1' after a '0', that means we found a second segment
            if (seenZero && s[i - 1] == '0' && s[i] == '1') {
                return false;
            }
        }
        return true;
        }
    };

/*Check if Binary String Has at Most One Segment of Ones
https://leetcode.com/problems/check-if-binary-string-has-at-most-one-segment-of-ones/
in this we have check the stream of 1 in continous manner if there is no continous we return false in first if statement we check if we exiting any segment of 1 so it get atleast 1 segment of 1 so return true in other if statement we check if it is entring any segment of 0 to 1 then return false else return true*/









