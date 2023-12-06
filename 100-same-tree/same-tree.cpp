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

    void preorder(TreeNode* root, vector<int> &arr)
    {
        if(!root){arr.push_back(-1);return;}
        arr.push_back(root->val);
        preorder(root->left,arr);
        preorder(root->right,arr);
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> arr1,arr2;
        preorder(p,arr1);
        preorder(q,arr2);
        if(arr1.size()!=arr2.size())return false;
        for(int i = 0 ; i<arr1.size() ;i++)
        {
            if(arr1[i]!=arr2[i])return false;
        }
        return true;
    }
};