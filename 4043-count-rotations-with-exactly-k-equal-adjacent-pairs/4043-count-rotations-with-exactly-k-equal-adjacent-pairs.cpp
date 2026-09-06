class Solution {
public:
    int countRotations(string s, int m) {
        int n = s.size(),countEQUAL = 0;
        for(int i = 0; i < n ; i++){
           int score = 0;
           int notEqualScore = 0;
            for(int k = 1; k < n; k++){
                if(s[k-1] == s[k])
                   score++;
                
            }
            if(score == m)
                 countEQUAL++;
            
            int last = s[n-1];
            for(int j = n-1; j > 0; j--){
                s[j] = s[j-1];
            }
            s[0] = last;
        } 
        return countEQUAL;
    }
};