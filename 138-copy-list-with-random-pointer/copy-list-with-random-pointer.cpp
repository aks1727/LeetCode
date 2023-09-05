/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head)
        {Node* ptr = head;
        Node* dummy = new Node(head->val);
        Node* d = dummy;
        unordered_map<Node*,Node*> mp;
        while(ptr!=NULL)
        {
            mp[ptr]=dummy;
            dummy->val = ptr->val;
            if(ptr->next)
            dummy->next = new Node(0);
            else dummy->next=NULL;
            dummy=dummy->next;
            ptr=ptr->next;
        }
        ptr=head;
        while(ptr)
        {
            if(ptr->random)
            mp[ptr]->random = mp[ptr->random];
            ptr=ptr->next;
        }
        return d;
        }
        return NULL;
    }
};