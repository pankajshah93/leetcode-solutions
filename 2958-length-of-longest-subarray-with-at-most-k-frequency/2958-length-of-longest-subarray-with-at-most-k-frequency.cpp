class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        int left = 0,right = 0;
        unordered_map<int,int>mp;
        while(right < n){
            mp[nums[right]]++;
            while(mp[nums[right]] > k){
                mp[nums[left]]--;
                left++;
            }
            count = max(count, (right - left + 1));
            right++;
        }
        return count;
    }
};