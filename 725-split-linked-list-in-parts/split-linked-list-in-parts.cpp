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

    int length(ListNode* head)
    {
        int cnt=0;
        while(head)
        {
            head=  head->next;
            cnt++;
        }
        return cnt;
    }
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int n = length(head);
        vector<ListNode*> res(k);
        if(n<k)
        {
            int i = 0;
            while(head)
            {
                res[i]=head;
                head=head->next;
                res[i++]->next=NULL;
            }
        }
        else{
            int i=0;
            int cnt=0;
            int afterSize  = n/k;
            int firstSize = ceil((n*1.0)/k);
            int canAfter = n%k;
            bool after = false;
            int aftercnt=0;
            while(head)
            {
                bool op = false;
                res[i]=head;
                cnt=1;
                ListNode *ptr = res[i];
                while(ptr)
                {
                    if(!after and cnt==firstSize)
                    {
                        i++;
                        head = ptr->next;
                        ptr->next=NULL;
                        aftercnt++;
                        if(canAfter==aftercnt)after=true;
                        op=1;
                    }
                    else if(after and cnt==afterSize)
                    {
                        i++;
                        head = ptr->next;
                        ptr->next=NULL;
                        op=1;
                    }
                    ptr=ptr->next;
                    cnt++;
                }
                if(!op)
                head=head->next;
            }
        }
        return res;
    }
};