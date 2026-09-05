class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int PrevChepPrice = INT_MAX,profit = 0;
        for(int i = 0; i < prices.size(); i++){
            PrevChepPrice  = min(PrevChepPrice,prices[i]);
            profit = max(profit, prices[i] - PrevChepPrice);
        }
        return profit;
    }
};