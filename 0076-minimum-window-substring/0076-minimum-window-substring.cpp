class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        vector<int>targetCount(128,0);
        for(int k : t){
            targetCount[k]++;
        }
        vector<int>windowCount(128,0);
        int left = 0,right = 0,startIndex = 0;
        int minLength = INT_MAX,target = t.size(),currentTarget = 0;
        while(right < n){
            windowCount[s[right]]++;
            if(targetCount[s[right]] && windowCount[s[right]] <= targetCount[s[right]]){
                currentTarget++;
            }
            while(currentTarget == target){
                if(right - left + 1 < minLength){
                    minLength = right - left + 1;
                    startIndex = left;
                }
                if(targetCount[s[left]] && windowCount[s[left]] <= targetCount[s[left]])
                currentTarget--;
                
                windowCount[s[left]]--;
                left++;
            }
            right++;    
        }
        return minLength == INT_MAX ? "" : s.substr(startIndex,minLength);
    }
};