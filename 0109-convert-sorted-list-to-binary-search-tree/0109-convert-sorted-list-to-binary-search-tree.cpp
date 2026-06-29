/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
int count(ListNode* head){
    int n = 0;
    while(head){
        n++;
        head = head->next;
    }
    return n;
}
TreeNode* bst(ListNode* &head,int n){
    if(n == 0){
        return NULL;
    }
    if(n == 1){
        TreeNode * temp = new TreeNode(head->val);
        head = head->next;
        return temp;
    }
    TreeNode* left =  bst(head,n/2);
    TreeNode *root = new TreeNode(head->val);
    root->left = left;
    head = head->next;
    root->right = bst(head,n-n/2-1);
    return root;
}
    TreeNode* sortedListToBST(ListNode* head) {
        int n = count(head);
        return bst(head,n);
    }
};