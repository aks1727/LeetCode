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
    int totalTilt =0;

    int  traverse(TreeNode* root){
        if(!root)return 0;
        int leftSum = traverse(root->left);
        int rightSum = traverse(root->right);
        totalTilt += abs(leftSum-rightSum);
        return root->val + leftSum + rightSum;
    }

    int findTilt(TreeNode* root) {
        if(!root)return 0;
        int t = traverse(root);
        return totalTilt;
        

    }
};