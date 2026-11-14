class Solution {
public:
    int numSquares(int n) {
        vector<int>minP(n+1,INT_MAX);
        if(n <= 3){
            return n;
        }
        minP[0] = 0;
        minP[1] = 1;
        minP[2] = 2;
        minP[3] = 3;
        for(int i = 4; i <= n; i++){
            for(int j = 1; j*j <= i; j++){
                minP[i] = min(minP[i],1+minP[i-j*j]);
            }
        }
        return minP[n];
    }
};