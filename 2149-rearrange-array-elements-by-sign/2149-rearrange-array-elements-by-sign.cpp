class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>sum;
        vector<int>sub;
        for(int  i = 0; i < n; i++){
            if(nums[i] > 0){
                sum.push_back(nums[i]);
            }else{
                sub.push_back(nums[i]);
            }
        }
      
        // for(int  i = 0; i < n; i++){
        //     if(nums[i] < 0){
        //         sub.push_back(nums[i]);
        //     }
        // }
        vector<int>result;
        for(int i = 0; i < n/2; i++){
            result.push_back(sum[i]);
            result.push_back(sub[i]);
        }
        return result;
    }

};