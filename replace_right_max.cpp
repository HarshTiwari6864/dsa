
class Solution {
    public:
        vector<int> replaceElements(vector<int>& arr) {
            int n = arr.size();
            int maxi = -1; // Start with -1, because last element ka next bada nahi hai
            
            for (int i = n - 1; i >= 0; i--) {
                int current = arr[i]; // Pehle current value store karo
                arr[i] = maxi;         // Replace arr[i] with max value till now
                maxi = max(maxi, current); // Update maxi including current element
            }
            
            return arr;
        }
    };

    /*https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/description/
    Given an array arr, replace every element in that array with the greatest element among the elements to its right, and replace the last element with -1.*/