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

    void traverse(TreeNode* root, vector<string>&res,string s){
        if(!root){
            cout<<"reached root end"<<endl;
            return;
        }
        s+=(to_string(root->val));
        if(!root->left and !root->right){
            cout<<"reached"<<endl;
            res.push_back(s);
            return;
        }
        if(root->left || root->right)
        {
            s+="->";
        }
        cout<<s<<endl;
        if(root->left)
        traverse(root->left,res,s);
        if(root->right)
        traverse(root->right,res,s);

    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        if(!root) return {};
        traverse(root, res,"");
        return res;
    }
};