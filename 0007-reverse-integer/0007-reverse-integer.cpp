class Solution {
public:
    int reverse(int x) {
        long long result = 0;
        while(x){
            long long rem = x % 10;
            result = rem + result * 10;
            x /= 10;
        }
        if(result > INT_MAX || result < INT_MIN){
            return 0;
        }
        return result;
    }
};