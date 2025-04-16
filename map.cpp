#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int maximumFrequency(vector<int> &arr, int n)
{
    //Write your code here
    unordered_map<int,int>mp;
    int maxFreq=0;
    int MaxAns=0;
    for(int i=0;i<arr.size();i++){
       mp[arr[i]]++;
       maxFreq=max(maxFreq,mp[arr[i]]);
        
    }
    for(int i=0;i<arr.size();i++){
        if(maxFreq==mp[arr[i]]){
        MaxAns=arr[i];
        break;
    }}
    return MaxAns;
}



/*Ninja is given an array of integers that contain numbers in random order. He needs to write a program to find and return the number which occurs the maximum times in the given input. He needs your help to solve this problem.

If two or more elements contend for the maximum frequency, return the element which occurs in the array first i.e. whose index is lowest.

For example,

For 'arr' = [ 1, 2, 3, 1, 2]. you need to return 1.

problem:-
https://www.naukri.com/code360/problems/maximum-frequency-number_920319?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar&leftPanelTabValue=PROBLEM


*/