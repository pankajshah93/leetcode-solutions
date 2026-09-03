class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int size = n/3;
        vector<int>result;
        unordered_map<int,int>mp;
        for(int x : nums){
            mp[x]++;
        }
        for(auto x : mp){
            if(x.second > size){
                result.push_back(x.first);
            }
        }
        return result;
    }
    
};