class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();
        if(n != m){
            return 0;
        }
        vector<int>freq1(128,0);
        vector<int>freq2(128,0);
        for(char  x : s){
            freq1[x]++;
        }
        for(char  x : t){
            freq2[x]++;
        }
        for(int i = 0; i < n; i++){
            if(freq1[s[i]] != freq2[s[i]]){
                return 0;
            }
        }
        return 1;
    }
};