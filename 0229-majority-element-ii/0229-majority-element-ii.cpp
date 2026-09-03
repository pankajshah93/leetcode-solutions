class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //only give two answer  n/3  not grater and graetar than n/3 so only two value in answer
        int count1 = 0,count2 = 0;
        int ele1 = INT_MIN,ele2 = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            if(count1 == 0 && ele2 != nums[i]){
                ele1 = nums[i];
                count1++;
            }else if(count2 == 0 && ele1 != nums[i]){
                ele2 = nums[i];
                count2++;
            }else if(ele1 == nums[i]) count1++;
            else if(ele2 == nums[i]) count2++;
            else{
                count1--;
                count2--;
            }
        }
        vector<int>ls;
        int cnt1 = 0,cnt2 = 0;
        for(int i = 0; i < nums.size(); i++){
            if(ele1 == nums[i]) cnt1++;
            if(ele2 == nums[i])  cnt2++;
        }
        int Min = (int)(nums.size()/3) + 1;
        if(cnt1 >= Min) ls.push_back(ele1);
        if(cnt2 >= Min) ls.push_back(ele2);
        sort(nums.begin(),nums.end());
        return ls;;
    }
};