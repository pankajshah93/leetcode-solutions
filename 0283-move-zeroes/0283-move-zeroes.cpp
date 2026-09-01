class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int value = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                swap(nums[i],nums[value]);
                value++;
            }
            
        }
    }
};