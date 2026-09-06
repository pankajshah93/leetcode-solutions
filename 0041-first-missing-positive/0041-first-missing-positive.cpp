class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int expected = 1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] <= 0)
                continue;
            else if(nums[i] < expected)
                continue;
            else if(nums[i] != expected)
                return expected;
            expected++;
        }
        return expected;;
    }
};