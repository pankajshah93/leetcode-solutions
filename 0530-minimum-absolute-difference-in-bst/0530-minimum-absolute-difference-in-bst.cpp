/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void mindif(TreeNode* root , vector<int>&ans){
        if(!root){
            return;
        }
        mindif(root->left,ans);
        ans.push_back(root->val);
        mindif(root->right,ans);
        
       
    }
    int getMinimumDifference(TreeNode* root) {
       vector<int>ans;
       mindif(root,ans);
       int res = INT_MAX;
        for(int i =1 ; i < ans.size() ;i++){
            res = min(res, abs(ans[i-1] - ans[i]));
        }
        return res;
    }
};