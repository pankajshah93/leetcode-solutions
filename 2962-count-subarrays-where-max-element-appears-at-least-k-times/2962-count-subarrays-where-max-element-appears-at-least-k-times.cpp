class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int left =0 ,right = 0;
        long long count = 0;
        int MaxVal = nums[0];
        long long freq = 0;
        for(int x : nums){
            MaxVal = max(MaxVal , x);
        }
        while(right < n){
            if(nums[right] == MaxVal){
                 freq++;
            }
            while(freq >= k){
                count += (n - right);
                if(MaxVal == nums[left]){
                    freq--;
                }
                left++;
            }
            right++;
        }
        return count;
    }
};