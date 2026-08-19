class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int left  = 0 ,right = 0;
        int length = n+1;
        int sum = 0;
        while(right < n){
            sum += nums[right];
            while(sum  >= target){
                sum -= nums[left];
                length =min(length , (right - left + 1));
                left++;
            }
            right++;
        }
        
        return length == n+1 ? 0 : length;
    }
};