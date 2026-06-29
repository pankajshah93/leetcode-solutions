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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(!root){
            return ans;
        }
        stack<TreeNode*>s1;
        stack<bool>s2;
        s1.push(root);
        s2.push(0);
        while(!s1.empty()){
            TreeNode *temp = s1.top();
            s1.pop();
            int val = s2.top();
            s2.pop();
            if(val){
                ans.push_back(temp->val);
            }
            else{
               if(temp->right){
                    s1.push(temp->right);
                    s2.push(0);
                }
                s1.push(temp);
                s2.push(1);
                
                 if(temp->left){
                    s1.push(temp->left);
                    s2.push(0);
                }
            }
        }
        return ans;
    }
};