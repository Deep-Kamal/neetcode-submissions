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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL){
            return NULL;
        }

        if(root == p || root == q){
            return root;
        }
        TreeNode* leftN  = lowestCommonAncestor(root->left, p,  q);
        TreeNode* rightN = lowestCommonAncestor(root->right, p, q);
        
        if(leftN != NULL && rightN != NULL)
            return root;


        if(leftN != NULL)
            return leftN;
        return rightN;
    }
};
