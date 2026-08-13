class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int prefixSum = 0;
        mp[0] = 1;
        int result = 0;
        for(int value : nums){
            prefixSum+=value;
            result+=mp[prefixSum-k];
            mp[prefixSum]++;
        }
        return result;
    }
};