class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {
        int n = stones.size();
        int sum = 0;
        for(int  i = 0; i < n; i++){
            sum += stones[i];
        }
        int target = sum/2;
        vector<int>dp(target+1,0);
        dp[0] = 1;
        for(int i = 0; i< n; i++){
            for(int j = target; j>= 0; j--){
                if(j-stones[i] >= 0){
                    dp[j] = dp[j] || dp[j - stones[i]];
                }
            }
        }
        int index = 0;
        for(int i = target; i >= 0; i--){
            if(dp[i] == 1){
                index = i;
                break;
            }
        }
        int result = 0;
        result = sum - index;
        result-=index;
        return result;
    }
};