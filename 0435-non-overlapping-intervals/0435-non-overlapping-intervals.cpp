bool camp(vector<int>&a,vector<int>&b){
    return a[1] < b[1];
}
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),camp);
        int lasttime = -50000,totalremoveinterval = 0;
        int n = intervals.size();
        for(int i = 0; i < n; i++){
            if(lasttime <= intervals[i][0]){
                lasttime = intervals[i][1];
            }else{
                totalremoveinterval++;
            }
        }
        return totalremoveinterval;
    }
};