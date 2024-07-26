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

    void traverse(queue<pair<TreeNode*, int>> &q,vector<vector<int>>&res){
        if(q.empty())return ;
        TreeNode* first = q.front().first;
        int second = q.front().second;

        if(first->left)q.push({first->left,second+1});
        if(first->right)q.push({first->right,second+1});


        if(res.size()<=second)res.push_back({first->val});
        else res[second].push_back(first->val);

        q.pop();
        traverse(q,res);
    }

    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(!root)return {};
        queue<pair<TreeNode*, int>> q;
        vector<vector<int>>res;
        q.push({root,0});
        traverse(q,res);
        reverse(res.begin(),res.end());
        return res;
    }
};