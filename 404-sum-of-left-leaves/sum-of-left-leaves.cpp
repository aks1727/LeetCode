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
    int sum=0;
    void traverse(TreeNode* root,int left)
    {
        if(root)
        {
            
            traverse(root->left,1);
            traverse(root->right,0);
            if(left==1 and !root->left and !root->right)
            {
                sum+=root->val;
            }
            
        }
        return ;
    }

    int sumOfLeftLeaves(TreeNode* root) {
        traverse(root,0);
        return sum;
    }
};