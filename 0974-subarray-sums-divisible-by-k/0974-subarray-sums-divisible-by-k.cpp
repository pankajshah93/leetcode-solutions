class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int prefixSum = 0;
        mp[0] = 1;
        int result = 0;
        for(int value : nums){
            prefixSum+=value;
            int rem = ((prefixSum%k)+k)%k;
            result+=mp[rem];
            mp[rem]++;
        }
        return result;
    }
};