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
    int slove(TreeNode* root, int& result){
        if(root == NULL){
            return 0;
        }

        int left  = slove(root->left, result);
        int right = slove(root->right, result);

        result = max(result, left + right);

        return max(left , right) + 1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        int result = INT_MIN;
        
        slove(root, result);


        return result;

    }
};
