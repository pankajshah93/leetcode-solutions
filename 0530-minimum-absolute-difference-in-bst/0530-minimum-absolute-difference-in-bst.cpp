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
    void mindif(TreeNode* root , int &prev,int &mindiff){
        if(!root){
            return;
        }
        mindif(root->left,prev,mindiff);
        if(prev != INT_MIN)
        mindiff = min(mindiff,abs(prev - root->val));
        prev = root->val;
        mindif(root->right,prev,mindiff);
    }
    int getMinimumDifference(TreeNode* root) {
       int prev = INT_MIN;
       int mindiff = INT_MAX;
       mindif(root,prev,mindiff);
        return mindiff;
    }
};