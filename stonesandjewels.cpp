class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int n = stones.size();
        int res = 0;
        
        for (int i = 0; i < jewels.size(); i++) {
            char a = jewels[i];
            for (int j = 0; j < n; j++) {
                if (a == stones[j]) {
                    res++;
                }
            }
        }
        return res;
    }
};



/*https://leetcode.com/problems/jewels-and-stones/description/?envType=problem-list-v2&envId=string*/

/*You're given strings jewels representing the types of stones that are jewels, and stones representing the stones you have. Each character in stones is a type of stone you have. You want to know how many of the stones you have are also jewels.

Letters are case sensitive, so "a" is considered a different type of stone from "A".*/