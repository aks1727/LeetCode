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

    int length(ListNode *head)
    {
        int c =0;
        while(head!=NULL){
            c++;
            head=head->next;
        }
        return c;
    }
    int getDecimalValue(ListNode* head) {
        int l = length(head);
        int res = 0;
        while(head!=NULL)
        {
            l--;
            if(head->val==1)
            res = res + pow(2,l);

            head=head->next;
        }
        return res;
    }
};