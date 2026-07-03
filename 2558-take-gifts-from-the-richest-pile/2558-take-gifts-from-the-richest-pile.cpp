class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long ans = 0;
        priority_queue<long long>pq(gifts.begin(),gifts.end());
        while(k){
            int maxi = pq.top();
            pq.pop();
            pq.push(sqrt(maxi));
            k--;
        }
        while(!pq.empty()){
            ans+=pq.top();
            pq.pop();
        }
        return ans;
    }
};