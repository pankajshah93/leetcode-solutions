class Solution {
public:
    int kthSmallest(vector<vector<int>>& mat, int k) {
        int n = mat.size();
        vector<pair<int,pair<int,int>>>temp;
        for(int i = 0; i < n; i++){
            temp.push_back({mat[i][0],{i,0}});
        }
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq(temp.begin(),temp.end());

        int result;
        pair<int,pair<int,int>>element;
        int row_index,col_index;

        while(k--){
             element = pq.top();
            pq.pop();
            result = element.first;
            row_index = element.second.first;
            col_index = element.second.second;

            if(col_index < n-1){
                pq.push({mat[row_index][col_index+ 1],{row_index,col_index + 1}});
            }
        }
        return result;
    }
};