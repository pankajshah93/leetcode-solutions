class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = nums[0];
        int vote = 1;
        for(int i = 1; i < nums.size(); i++){
            if(vote == 0){
                candidate = nums[i];
            }
            if(candidate == nums[i]){
                vote++;
            }else{
                vote--;
            }
        }
        return candidate;
    }
};