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

    ListNode* recur(ListNode* current, ListNode* previous){
        if(current==NULL)return previous;
        ListNode* forward = current->next;
        current->next = previous;
        return recur(forward,current);
    }

    ListNode* reverseList(ListNode* head) {
       
        return  recur(head, NULL);;
    }
};