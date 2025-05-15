class Solution {
public:
    int arrangeCoins(int n) {
        long left = 0, right = n;  // use long to avoid overflow

        while (left <= right) {
            long mid = left + (right - left) / 2;
            long total = mid * (mid + 1) / 2;

            if (total == n) {
                return mid;
            } else if (total < n) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return right;  // right is the largest k such that k(k+1)/2 <= n
    }
};

/*https://leetcode.com/problems/arranging-coins/description/*/