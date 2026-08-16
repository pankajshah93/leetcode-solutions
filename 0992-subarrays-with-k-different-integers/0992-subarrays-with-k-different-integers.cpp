class Solution {
public:
    int atleast(vector<int>&nums,int k){
        int n = nums.size();
        int left = 0 , right = 0;
        unordered_map<int,int>mp;
        int result = 0;
        while(right < n){
            mp[nums[right]]++;
            if(mp[nums[right]] == 1){
                k--;
            }
            while(k == 0){
                result += n - right;
                mp[nums[left]]--;
                if(mp[nums[left]] == 0){
                    k++;
                }
                left++;
            }
            right++;
        }
        return result;
    }


    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atleast(nums,k) - atleast(nums,k+1);
    }
};