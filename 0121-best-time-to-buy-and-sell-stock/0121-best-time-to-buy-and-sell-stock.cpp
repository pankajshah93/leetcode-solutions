class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minbuy = INT_MAX;
        int maxsell = INT_MIN;
        for(int i = 0; i < n; i++){
            minbuy = min(minbuy,prices[i]);
            maxsell = max(maxsell,prices[i]-minbuy);
        }
        return maxsell;
    }
};