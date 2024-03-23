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
    void reorderList(ListNode* head) {
        if(!head)return;
        vector<int> v ;
        ListNode* ptr = head;
        while(head)
        {
            v.push_back(head->val);
            head=head->next;
        }
        if(v.size()==1)return;
        ListNode* dummy = new ListNode(v[0]);
        head = dummy;
        int n = v.size(),t = v.size();
        if(t&1)t = t/2 +1;
        else t/=2;
        for(int i = 0; i < t ;i++)
        {
            if(i==0)
            {
                dummy->next = new ListNode(v[n-1]);
                dummy = dummy->next;
            }
            else{
                if(i == n-i-1)
                {
                dummy->next = new ListNode(v[i]);
                }
                else{dummy->next = new ListNode(v[i]);
                dummy = dummy->next;
                dummy->next = new  ListNode(v[n-i-1]);
                dummy = dummy->next;}
            }
        }
        ptr->next = head->next;
    }
};