class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        vector<int>freq(nums.size(),0);
        if(nums.size() == 1){
            return 0;
        }
        unordered_map<int,int>mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        for(int i = 0; i < nums.size(); i++){
            if(mp[nums[i]] > 1){
                return 1;
            }
        }
        return 0;
    }
};