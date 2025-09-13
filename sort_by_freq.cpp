class Solution {
public:
    string frequencySort(string s) {
        vector<int>freq(128,0);
        for(char c:s){
            freq[c]++;
        }
        int total=s.size();
        string res="";
        while(res.size()<total){
            int maxfreq=0;
            int idx=-1;
            for(int i=0;i<128;i++){
                if(freq[i]>maxfreq){
                    maxfreq=freq[i];
                    idx=i;
                }
            }
            res.append(maxfreq,char(idx));
            freq[idx]=0;
        }
        return res;
    }
};
/*https://leetcode.com/problems/sort-characters-by-frequency/description/?envType=problem-list-v2&envId=counting*/