class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> res = prices;
        int n = prices.size();
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (prices[j] <= prices[i]) {
                    res[i] = prices[i] - prices[j];
                    break;
                }
            }
        }
        return res;
    }
};
