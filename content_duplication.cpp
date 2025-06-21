class Solution {
public:
    bool containsDuplicate(vector<int>& arr) {
       unordered_map<int,int>mp;
       for(int i=0;i<arr.size();i++){
        if(mp.find(arr[i])==mp.end()){
            mp[arr[i]]==1;
        }
        else{
            return true;
        }
       }
       return false;
    }
};


/*Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.*/

//here we made an unordered map to store values of array in once and if it repeats then we return true if not then we return false after exiting loop