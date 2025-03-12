/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode recur(ListNode current, ListNode previous){
        if(current==null)return previous;
        ListNode forward = current.next;
        current.next = previous;
        return recur(forward,current);
    }
    public ListNode reverseList(ListNode head) {
        return recur(head,null);
    }
}