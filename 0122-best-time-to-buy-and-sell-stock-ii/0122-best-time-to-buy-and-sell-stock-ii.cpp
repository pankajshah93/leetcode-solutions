class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int totalprofit =0,previous = prices[0],profit = 0;
        for(int i = 1; i < n; i++){
            if(previous <= prices[i]){
                profit += abs(prices[i]-previous);
            }
            previous = prices[i];
        }
        return profit;
    }
};