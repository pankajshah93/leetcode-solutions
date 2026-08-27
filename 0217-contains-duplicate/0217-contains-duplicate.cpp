class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>fre;
        for(int x : nums){
            if(fre.count(x)){
                return 1;
            }
            fre.insert(x);
        }
        return 0;
    }
};