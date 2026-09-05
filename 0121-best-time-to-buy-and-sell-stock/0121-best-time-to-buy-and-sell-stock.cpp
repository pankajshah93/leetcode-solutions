class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int PrevChepPrice = INT_MAX;
        int profit = 0;
        for(int i = 0; i < n; i++){
            PrevChepPrice  = min(PrevChepPrice,prices[i]);
            profit = max(profit, prices[i] - PrevChepPrice);
        }
        return profit;
    }
};