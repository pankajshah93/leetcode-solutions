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
        int count1 = 0;
        for(int i = 0; i < nums.size(); i++){
            if(candidate == nums[i]) count1++;
        }
        if(count1 > nums.size()/2){
            return candidate;
        }
        return -1;
    }
};