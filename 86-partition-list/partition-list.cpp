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
    ListNode* partition(ListNode* head, int x) {
        vector<int> less,big;
        ListNode* ptr = head;
        while(ptr){
            if(ptr->val < x)less.push_back(ptr->val);
            else big.push_back(ptr->val);
            ptr=ptr->next;
        }
        ptr=head;
        for(int x : less)
        {
            ptr->val = x;
            ptr=ptr->next;
        }
        for(int x : big)
        {
            ptr->val  =x;
            ptr=ptr->next;
        }
        return head;
    }
};