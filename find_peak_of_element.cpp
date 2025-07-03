class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] > nums[mid + 1]) {
                // Peak is in the left half (including mid)
                right = mid;
            } else {
                // Peak is in the right half (excluding mid)
                left = mid + 1;
            }
        }

        // left == right is the index of a peak
        return left;
    }
};


/*A peak element is an element that is strictly greater than its neighbors.

Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.*/