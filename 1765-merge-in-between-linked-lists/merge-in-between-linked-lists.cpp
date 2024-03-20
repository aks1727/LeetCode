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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int  ind = 0;
        ListNode* tmp = list1;
        ListNode* anode;
        ListNode* bnode;
        ListNode* endNondeList2;
        while(list1)
        {
            if(ind+1==a)
            {
                anode  = list1;
            }
            else if(ind==b)
            {
                bnode =  list1;
            }
            list1 = list1->next;
            ind++;
        }
        ListNode* ptr = list2;
        while(ptr)
        {
            endNondeList2 = ptr;
            ptr = ptr->next;
        }

        endNondeList2->next = bnode->next;
        anode->next = list2;
        return tmp;
        
    }
};