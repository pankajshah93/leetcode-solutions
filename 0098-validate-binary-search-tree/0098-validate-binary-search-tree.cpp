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
void inasc(TreeNode*root,vector<int>&arr){
    if(!root){
        return;
    }
    inasc(root->left,arr);
    arr.push_back(root->val);
    inasc(root->right,arr);
}
    bool isValidBST(TreeNode* root) {
        vector<int>arr;
        if(!root){
            return 0;
        }
        inasc(root,arr);
        for(int i = 0 ; i< arr.size()-1;i++){
            if(arr[i+1] <= arr[i]){
                return false;
            }
        }
        return true;
    }
};