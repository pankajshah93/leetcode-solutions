class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int n = nums.size();
        long long left  =0,right = 0;
        long long count = 0;
        long long sum = 0;
        long long product = 1;
        while(right < n){
            sum += nums[right];
            //sum * windo size
            product = ( right - left +1) * sum;
            while(product >= k){
                sum -= nums[left];
                left++;
                product = sum*(right - left + 1);
            }
            count+=( right - left +1);
            right++;
        }
        return count;
    }
};