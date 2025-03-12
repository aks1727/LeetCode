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

    void recur(ListNode* current, ListNode* &previous){
        if(current==NULL)return;
        ListNode* forward = current->next;
        current->next = previous;
        previous = current;
        current = forward;
        recur(current,previous);
    }

    ListNode* reverseList(ListNode* head) {
        ListNode* previous = NULL;
        recur(head, previous);
        return previous;
    }
};