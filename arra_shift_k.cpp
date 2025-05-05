#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n; // Point 1: handle k > n
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};


/*https://leetcode.com/problems/rotate-array/description/ Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.*/