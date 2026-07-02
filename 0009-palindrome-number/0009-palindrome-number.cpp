class Solution {
public:
    bool isPalindrome(int x) {
        int rem=0,sp=0;
        long ans=0;
        int temp=x;
        if(x<0) return false;
        if(x==0) return true;
        while(x!=0){
            rem=x%10;
            ans=ans*10+rem;
            x=x/10;

        }
        if(ans==temp){
            return true;
        }
        
        return false;
    }
};