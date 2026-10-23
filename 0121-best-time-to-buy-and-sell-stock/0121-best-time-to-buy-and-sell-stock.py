class Solution:
    def maxProfit(self, prices: list[int]) -> int:
        minbuy = sys.maxsize
        maxprofit = 0
        for i in range(len(prices)):
            minbuy = min(minbuy,prices[i])
            maxprofit = max(maxprofit, abs(prices[i] - minbuy))
        return maxprofit    