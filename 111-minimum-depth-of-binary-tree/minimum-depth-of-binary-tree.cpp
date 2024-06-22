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

    void traverse(int cnt , vector<int>& t, TreeNode* root)
    {
        if(!root)return;
        if(!root->left and !root->right){
            t.push_back(cnt);
            return;
        }
        cnt++;
        traverse(cnt, t, root->left);
        traverse(cnt, t, root->right);
    }

    int minDepth(TreeNode* root) {
        vector<int> t;
        int cnt =0;
        if(!root)return 0;
        traverse(1,t,root);
        return *min_element(t.begin(),t.end());
    }
};