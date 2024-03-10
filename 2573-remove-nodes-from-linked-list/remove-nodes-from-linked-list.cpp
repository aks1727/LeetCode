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
    ListNode* removeNodes(ListNode* head) {
        stack<int> st;
        st.push(INT_MIN);
        while(head)
        {
            while(!st.empty() and st.top()<head->val)
            {
                st.pop();
            }
            st.push(head->val);
            head = head->next;
        }
        ListNode* dummy = new ListNode();
        ListNode* ptr = dummy->next;
        while(!st.empty())
        {
            ListNode* t = new ListNode(st.top(),ptr);
            ptr = t;
            st.pop();
        }
        return ptr;
    }
};