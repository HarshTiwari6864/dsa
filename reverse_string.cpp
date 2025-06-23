class Solution {
public:
    void reverseString(vector<char>& s) {
        int i=0,j=s.size()-1;
        while(i<j){
            int temp=s[i];
            s[i]=s[j];
            s[j]= temp;
            i++;
            j--;
        }
    }
};

/*Write a function that reverses a string. The input string is given as an array of characters s.*/