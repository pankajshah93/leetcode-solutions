class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int PrevChepPrice = INT_MAX;
        int CurrSellPrice = INT_MIN;
        int profit = 0,curr = 0;
        for(int i = 0; i < n; i++){
            PrevChepPrice  = min(PrevChepPrice,prices[i]);
            CurrSellPrice =  prices[i];
            curr = CurrSellPrice - PrevChepPrice;
            if(profit < curr){
                profit = curr;
            }
            cout<<CurrSellPrice;
        }
        return profit;
    }
};