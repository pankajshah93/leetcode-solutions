class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int size = n/2;
        unordered_map<int,int>mp;
        for(int x : nums){
            mp[x]++;
        }
        for(int x : nums){
            if(mp[x] > size){
                return x;
            }
        }
        return 0;
    }
};