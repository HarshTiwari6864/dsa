class Solution {
public:
    string removeStars(string s) {
        string c="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='*'){
                c.pop_back();
            }else{
                c+=s[i];
            }
            
        }
        return c;
    }
};


/*You are given a string s, which contains stars *.

In one operation, you can:

Choose a star in s.
Remove the closest non-star character to its left, as well as remove the star itself.
Return the string after all stars have been removed.*/