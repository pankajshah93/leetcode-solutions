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
TreeNode * find(TreeNode* root){
    TreeNode *curr = root->left;
    while(curr->right){
        curr = curr->right;
    }
    return curr;
}
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root){
            return NULL;
        }
        if(key < root->val){
            root->left = deleteNode(root->left,key);
        }else if(key > root->val){
            root->right = deleteNode(root->right,key);
        }else{
            // leaf node
            if(!root->left && !root->right){
                delete root;
                return NULL;
            }else if(!root->left){
                TreeNode*temp = root->right;
                delete root;
                return temp;
            }else if(!root->right){
                TreeNode*temp = root->left;
                delete root;
                return temp;
            }else{
                TreeNode*pred = find(root);
                root->val = pred->val;
                root->left = deleteNode(root->left,pred->val);
            }
        }
        return root;
    }
};