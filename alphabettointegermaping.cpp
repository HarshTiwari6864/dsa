class Solution {
public:
    string freqAlphabets(string s) {
        string ans;
        int n = s.size();

        for (int i = n - 1; i >= 0; ) {
            if (s[i] == '#') {
                // Take previous 2 digits
                int num = (s[i-2] - '0') * 10 + (s[i-1] - '0');
                ans += ('a' + num - 1);
                i -= 3; // move left past "xx#"
            } else {
                // Single digit
                int num = s[i] - '0';
                ans += ('a' + num - 1);
                i--;
            }
        }

        reverse(ans.begin(), ans.end()); // reverse because we built it backwards
        return ans;
    }
};


/*https://leetcode.com/problems/decrypt-string-from-alphabet-to-integer-mapping/description/*/