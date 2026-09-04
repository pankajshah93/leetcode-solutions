class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int index = n;
        int stable = 0;
        int maxEl = INT_MIN;
        for(int i = 0; i< n; i++){
            maxEl = max(maxEl, nums[i]);
            int minEl = INT_MAX;
            for(int j = i; j < n; j++){
                minEl = min(minEl, nums[j]);
            }
            stable = maxEl - minEl;
            if(stable <= k){
                return i;
            }
        }
        return -1;
    }
};