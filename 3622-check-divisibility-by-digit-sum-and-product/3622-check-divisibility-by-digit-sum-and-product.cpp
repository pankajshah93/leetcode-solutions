class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int prod = 1;
        int num = n;
        if(n == 0){
            return 0;
        }
        while(n){
            int rem = n % 10;
            sum += rem;
            prod *= rem;
            n/=10;
        }
        sum = sum + prod;
        if(num % sum == 0){
            return 1;
        }
        return 0;
    }
};