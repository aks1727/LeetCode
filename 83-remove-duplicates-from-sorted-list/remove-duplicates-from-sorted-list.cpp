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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head and head->next){
            ListNode* prev =  head;
            ListNode* cur = head->next;
            ListNode* dummy =head;
            ListNode* res = dummy;
            while(cur)
            {
                // cout<<prev->val<< " "<<cur->val<<endl;
                if(cur->next==NULL)
                {
                    if(prev->val==cur->val)
                    {
                        dummy->next=NULL;
                    }
                }
                if(prev->val != cur->val)
                {
                    dummy->next=cur;
                    dummy=dummy->next;
                }
                cur=cur->next;
                prev=prev->next;
            }
            return res;
        }
        return head;
    }
};