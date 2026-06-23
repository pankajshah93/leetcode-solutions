class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        for(int j = 0; j < n - 1; j++){
            int newtarget = target - nums[j];

            for(int i = j + 1; i < n; i++){
                if(nums[i] == newtarget){
                    return {j, i};
                }
            }
        }
        return {};
    }
};