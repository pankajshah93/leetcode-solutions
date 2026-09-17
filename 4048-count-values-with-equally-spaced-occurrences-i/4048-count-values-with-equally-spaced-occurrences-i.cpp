class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,vector<int>>mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]].push_back(i);
        }
        int count = 0;
        for(auto x : mp){
            int size = x.second.size();
        if(size == 3 && x.second[1] - x.second[0] == x.second[2] - x.second[1])
                count++;
        }
        return count;
    }
};