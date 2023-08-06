#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

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
    
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* dummy = head;   
        
        ListNode* ptr = head;
        ListNode* ptr2 = head->next;
        while(ptr and ptr2)
        {
            ListNode* tmp = new ListNode(__gcd(ptr->val,ptr2->val),ptr2);
            ptr->next = tmp;
            ptr=ptr->next->next;
            ptr2=ptr2->next;
        }
        return head;
    }
};

int main()
{
    int n;
    cin >> n;
    int a;
    cin >>a;
    ListNode * head = new ListNode(a);
    ListNode* t = head;
    for(int i=1;i<n;i++)
    {
        int a1;
        cin >> a1;
        ListNode* tmp = new ListNode(a1);
        t->next = tmp;
        t=t->next;
    }
    Solution obj;
    head = obj.insertGreatestCommonDivisors(head);
    while(head!=NULL)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
}
