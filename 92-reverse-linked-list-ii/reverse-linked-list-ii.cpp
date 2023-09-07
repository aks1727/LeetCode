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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL)return NULL;
        ListNode* ptr = head;
        vector<int> v;
        while(ptr)
        {
            v.push_back(ptr->val);
            ptr=ptr->next;
        }
        reverse(v.begin()+left-1, v.begin()+right);
        ptr = head;
        int i=0;
        while(ptr)
        {
            ptr->val = v[i++];
            ptr=ptr->next; 
        }
        return head;
    }
};