class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int expected = 1;
        for(int i = 0; i < n; i++){
            if(nums[i] <= 0){
                continue;
            }else if(nums[i] < expected){
                continue;
            }
            else if(nums[i] != expected){
                return expected;
            }
            expected++;
        }
            // if(n == 1 && nums[0] == 1){
            //     return n+1;
            // }else if(nums[n-1] < 0){
            //     return 1;
            // }
        return expected;;
    }
};