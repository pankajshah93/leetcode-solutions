class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {
       vector<int> bremovilta = nums;   // required by the problem statement
        vector<long long> gains;
        long long sum = 0;

        for (int x : bremovilta) {
            sum += x;
            string s = to_string(x);
            sort(s.begin(), s.end(), greater<char>());
            long long best = stoll(s);
            if (best > x) gains.push_back(best - x);   // keep only positive gains
        }

        sort(gains.begin(), gains.end(), greater<long long>());
        for (int i = 0; i < (int)gains.size() && i < k; i++) {
            sum += gains[i];
        }
        return sum;
    }
};