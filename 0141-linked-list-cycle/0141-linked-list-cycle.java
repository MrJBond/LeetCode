/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public boolean hasCycle(ListNode head) {
        ListNode wp = head;
        ListNode nextP = head;

        while(nextP != null && nextP.next != null){
            wp = wp.next;
            nextP = nextP.next.next;

            if(wp == nextP){
                return true;
            }
        }
        return false;
    }
}