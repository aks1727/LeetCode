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

    void traverse(TreeNode* root)
    {
        if(!root)return;
        
            TreeNode* tmp = root->right;
            root->right = root->left;
            root->left = tmp;
        traverse(root->left);
        traverse(root->right);
    }

    TreeNode* invertTree(TreeNode* root) {
        traverse(root);
        return root;
    }
};