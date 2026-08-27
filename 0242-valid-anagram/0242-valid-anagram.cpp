class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();
        if(n != m){
            return 0;
        }
        vector<int>freq(26,0);
        for(char  x : s){
            freq[x - 'a']++;
        }
        for(char  x : t){
            freq[x - 'a']--;
        }
        for(int x : freq){
            if(x != 0){
                return 0;
            }
        }
        return 1;
    }
};