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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode();
        ListNode* ptr = dummy;
        if(!list1)return list2;
        if(!list2)return list1;
        while(list1 and list2)
        {
            ListNode* t;
            if(list1->val <list2->val)
            {
                t = new ListNode(list1->val);
                list1 = list1->next;
            }
            else{
                t = new ListNode(list2->val);
                list2 = list2->next;
            }
            ptr->next = t;
            ptr = ptr->next;
        }
        if(list1)
        {
            ptr->next = list1;
        }
        if(list2)ptr->next = list2;
        
        return dummy->next;

    }
};