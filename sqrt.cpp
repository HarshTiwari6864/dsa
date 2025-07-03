class Solution {
    public: int mySqrt(int x) {
        
        if (x == 0 || x == 1)
            return x;

        
        int start = 1;
        int end = x;
        int mid = -1;

        
        while (start <= end) {
            mid = start + (end - start) / 2;

            if ((long) mid * mid > (long) x)
                end = mid - 1;
            else if (mid * mid == x)
                
                return mid;
            else
                
                start = mid + 1;
        }
        return end;
    }
};

/*Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.*/