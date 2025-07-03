class Solution {
public:
    bool isPerfectSquare(int num) {
        int l = 1, r = num;
        while(l <=r){
            long long m = l + (r-l)/2;
            if(m*m == num){
                return true;
            }else{
                if(m*m < num){ 
                    l=m+1;
                }else{
                    r=m-1;
                }
            }
        }
        return false;
    }
};

/*Given a positive integer num, return true if num is a perfect square or false otherwise.

A perfect square is an integer that is the square of an integer. In other words, it is the product of some integer with itself.

You must not use any built-in library function, such as sqrt.*/