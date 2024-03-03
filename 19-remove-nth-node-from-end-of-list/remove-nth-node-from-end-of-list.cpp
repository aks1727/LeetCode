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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<int> v;
        ListNode* ak = head;
        while(ak)
        {
            v.push_back(ak->val);
            ak = ak->next;
        }
        n = v.size() - n;
        v[n]=-1;
        reverse(v.begin(),v.end());
        if(v[0]!=-1){
            ak = new ListNode(v[0]);
            for(int i =1 ; i < v.size();i++)
            {
                if(v[i]==-1)continue;
                else
                {
                    ak = new ListNode(v[i],ak);
                }
            }
        }
        else{
            ak = NULL;
            for(int i = 1 ; i <v.size();i++)
            {
                ak = new ListNode(v[i],ak);
            }
        }
        return ak;
    }
};