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

    int depth(TreeNode* root,int cnt)
    {
        if(root==NULL)return cnt-1;
        int mx  = max(depth(root->left,cnt+1),depth(root->right,cnt+1));
        return mx;
    }

    int maxDepth(TreeNode* root) {
        int cnt =1;
        return depth(root,cnt);
    }
};