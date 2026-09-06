class Solution {
public:
    int countRotations(string s, int m) {
        int n = s.size();
        int count = 0;
        int countEQUAL = 0;
        int countNOTEQUAL = 0;
        for(int i = 0; i < n ; i++){
           int score = 0;
           int notEqualScore = 0;
            for(int k = 1; k < n; k++){
                if(s[k-1] == s[k]){
                   score++;
                }else if( s[k] != s[k-1] ){
                    notEqualScore++;
                }
            }
            cout<<score;
            if(score == m){
                 countEQUAL++;
            }
            if(notEqualScore == m){
                 countNOTEQUAL++;
            }
            // cout<<countEQUAL;
            // cout<<countEQUAL;
            cout<<countNOTEQUAL<<endl;
            int last = s[n-1];
            for(int j = n-1; j > 0; j--){
                s[j] = s[j-1];
            }
            s[0] = last;
        } 
        if(countEQUAL){
            return countEQUAL;
        }
        return 0;
    }
};