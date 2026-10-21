class Solution:
    def maximumWealth(self, accounts: list[list[int]]) -> int:
        row = len(accounts)
        col = len(accounts[0])
        max_wealth = 0
        for i in range(0,row):
            sum = 0
            for j in range(0,col):
                sum += accounts[i][j]
            max_wealth = max(max_wealth,sum)
        return max_wealth        

