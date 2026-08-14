class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int left  = 0 ,right = 0;
        int length = INT_MAX;
        int sum = 0;
        while(right < n){
            sum += nums[right];
            while(sum  >= target && left < n){
                sum -= nums[left];
                length =min(length , (right - left + 1));
                left++;
            }
            right++;
        }
        if(length == INT_MAX){
            length = 0;
        }
        return length;
    }
};