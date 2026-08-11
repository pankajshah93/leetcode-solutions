class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        //pair<int,pair<int,int>>pq;
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;

        int minElement = nums[0][0],maxElement = nums[0][0];
        for(int i = 0; i< nums.size();i++){
            pq.push({nums[i][0],{i,0}});
            minElement = min(minElement,nums[i][0]);
            maxElement = max(maxElement,nums[i][0]);
        }
        vector<int>result;
        result.push_back(minElement);
        result.push_back(maxElement);
        int row,col;
        pair<int,pair<int,int>>Element;

        while(pq.size() == nums.size()){
            Element = pq.top();
            pq.pop();

            row = Element.second.first;
            col = Element.second.second;

            col++;
            if(col == nums[row].size()){
                break;
            }

            pq.push({nums[row][col],{row,col}});
            maxElement = max(maxElement,nums[row][col]);
            minElement = pq.top().first;

            if(maxElement - minElement < result[1] - result[0]){
                result[1] = maxElement;
                result[0] = minElement;
            }

        }
        return result;
    }
};