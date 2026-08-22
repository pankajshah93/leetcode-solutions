class Solution {
public:
    bool checkDivisibility(int n) {
        if(n == 0) return 0;
        int sum = 0, prod = 1, num = n;
        while(n){
            int rem = n % 10;
            sum += rem;
            prod *= rem;
            n/=10;
        }
        sum = sum + prod;
        if(num % sum == 0)  return 1;
        return 0;
    }
};