class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int prefixSum = 0;
        mp[0] = 1;
        int result = 0;
        for(int i = 0; i < nums.size(); i++){
            prefixSum+=nums[i];
            result+=mp[prefixSum-k];
            mp[prefixSum]++;
        }
        return result;
    }
};