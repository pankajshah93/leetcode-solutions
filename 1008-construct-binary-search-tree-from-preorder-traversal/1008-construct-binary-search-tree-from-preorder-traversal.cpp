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
TreeNode* buildbst(vector<int>& preorder,int minval,int maxval,int &start){
    if(start >= preorder.size() || preorder[start] > maxval || preorder[start] < minval){
        return NULL;
    }
    TreeNode* Node = new TreeNode(preorder[start]);
    start++;
    Node->left = buildbst(preorder,minval,Node->val,start);
    Node->right = buildbst(preorder,Node->val,maxval,start);
    return Node;
}
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int start = 0;
        return buildbst(preorder,INT_MIN,INT_MAX,start);
    }
};