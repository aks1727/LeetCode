/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> res;

        ListNode* prev = NULL;
        ListNode* current = head;
        while(current){
            ListNode* forward = current->next;
            current->next = prev;
            prev = current;
            current = forward;
        }
        stack<int> st;
        while(prev){
            while(!st.empty() and st.top()<=prev->val){
                st.pop();
            }
            if(st.empty())res.push_back(0);
            else res.push_back(st.top());
            st.push(prev->val);
            prev = prev->next;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};