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
               //depth,val  
    vector<pair<int,int>> res;
    void traverse(int d, TreeNode* root)
    {
        if(root==NULL)return;
        res.push_back({d,root->val});
        traverse(d+1,root->left);
        traverse(d+1,root->right);
        
    }
    int findBottomLeftValue(TreeNode* root) {
        traverse(0,root);
        res.push_back({0,root->val});
        int mx =0;
        for(pair<int,int> x: res)
        {
            if(x.first>mx)
            {
                mx =x.first;
            }
        }
        for(auto &x : res)
        {
            if(mx==x.first)return x.second;
        }
        return -1;
    }
};