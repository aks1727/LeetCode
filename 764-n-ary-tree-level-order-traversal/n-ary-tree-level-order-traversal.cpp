/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:

    void traverse(queue<pair<Node*,int>>&q, vector<vector<int>>&res, vector<int>&temp){
        if(q.empty())return ;
        Node* first = q.front().first;
        int second = q.front().second;
        if(res.size()<=second){
            res.push_back({first->val});
        }
        else{
            res[second].push_back(first->val);
        }
        for(Node* x: first->children){
            q.push({x,second+1});
        }
        q.pop();
        traverse(q,res,temp)  ;      
    }

    vector<vector<int>> levelOrder(Node* root) {
        if(!root)return {};
        queue<pair<Node*,int>> q;
        q.push({root,0});
        vector<vector<int>> res;
        vector<int> temp;
        traverse(q,res,temp);
        return res;
    }
};