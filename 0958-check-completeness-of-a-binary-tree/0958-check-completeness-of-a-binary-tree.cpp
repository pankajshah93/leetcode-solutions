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
int count(TreeNode* root){
    if(!root){
        return 0;
    }
    return 1+count(root->left)+count(root->right);
}
bool isComplete(TreeNode *root,int index,int n){
     if(!root){
            return true;
        }
        if(index>=n) return false;
        return isComplete(root->left,2*index+1,n) &&  isComplete(root->right,2*index + 2,n) ;
}
    bool isCompleteTree(TreeNode* root) {
        int countNode = count(root);
        int index = 0;
       return isComplete(root,index,countNode);

    }
};