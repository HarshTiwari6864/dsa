class Solution {
    public:
        string kthDistinct(vector<string>& arr, int k) {
            unordered_map<string, int> mp;
    
            // First pass: count occurrences of each string
            for (const string& s : arr) {
                mp[s]++;
            }
    
            // Second pass: find the k-th distinct string (which appears only once)
            for (const string& s : arr) {
                if (mp[s] == 1) {
                    k--;
                    if (k == 0) return s;
                }
            }
    
            return ""; // If there are fewer than k distinct strings
        }
    };

    
    /*https://leetcode.com/problems/kth-distinct-string-in-an-array/description/
    A distinct string is a string that is present only once in an array.

Given an array of strings arr, and an integer k, return the kth distinct string present in arr. If there are fewer than k distinct strings, return an empty string "".

Note that the strings are considered in the order in which they appear in the array.*/