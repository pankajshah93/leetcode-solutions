class Solution {
public:
    int countCommas(int n) {
        if(n <= 999) return 0;
        long long ans = 0;
        for(int i = 1000; i <= n; i++){
            if(i >= 1000) ans++;
            if(i >= 1000000) ans++;
            if(i >= 1000000000) ans++;
        }
        return ans;
    }
};