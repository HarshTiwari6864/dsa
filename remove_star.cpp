class Solution {
public:
    string removeStars(string s) {
        stack<char> a;
        string result;
        for(int i=0;i<s.size();i++){
            if(s[i]=='*'){
                a.pop();
                continue;
            }
            else{
                a.push(s[i]);
            }
        }
        while(!a.empty()){
             result+=a.top();
            a.pop();
        }
      reverse(result.begin(), result.end());
      return  result;

    }
};

/*You are given a string s, which contains stars *.

In one operation, you can:

Choose a star in s.
Remove the closest non-star character to its left, as well as remove the star itself.
Return the string after all stars have been removed.*/