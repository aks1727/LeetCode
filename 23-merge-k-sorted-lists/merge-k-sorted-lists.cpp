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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0)return NULL;
        if(lists.size()==1)return lists[0];
        vector<int> v;
        for(int i = 0 ; i < lists.size();i++)
        {
            while(lists[i])
            {
                v.push_back(lists[i]->val);
                lists[i] = lists[i]->next;
            }
        }
        sort(v.begin(),v.end());
        ListNode* dummy = new ListNode();
        ListNode* ptr = dummy;
        for(int i = 0 ; i < v.size();i++)
        {
            ListNode* t = new ListNode(v[i]);
            ptr->next = t;
            ptr = ptr->next;
        }
        return dummy->next;
    }
};