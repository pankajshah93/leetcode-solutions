class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumeven = 2;
        int sumodd = 1;
        int odd = 1;
        int even = 2;
        while(n > 1){
            odd = odd + 2;
            sumodd = sumodd + odd;
            even = even + 2;
            sumeven = sumeven + even;
            n--; 
        }
        int num = 0;
        if(sumeven > sumodd){
            num = sumodd;
        }else{
            num = sumeven;
        }
        int ans = 0;
        for(int i = 1; i <= num;i++){
           if((sumeven % i == 0) && (sumodd % i == 0)){
                if(ans < i){
                    ans  = i;
                }
           }
        }
        return ans;

    }
};