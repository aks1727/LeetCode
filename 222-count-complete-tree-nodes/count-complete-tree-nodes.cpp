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
    void traverse(TreeNode* root, vector<int> &cnt)
    {
        if(!root)return;
        traverse(root->left,cnt);
        traverse(root->right,cnt);
        cnt.push_back(1);
    }

    int countNodes(TreeNode* root) {
        vector<int> cnt;
        traverse(root,cnt);
        return cnt.size();
    }
};