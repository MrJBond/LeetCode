/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
  int len(ListNode l){
        ListNode wp = l;
        int count = 0;

        while(wp != null){
            count++;
            wp = wp.next;
        }
        return count;
    }

    ListNode getIntersectionNode(ListNode headA, ListNode headB) {
         ListNode wp1 = headA;
         ListNode wp2 = headB;
        
        // there is no intersection
        if(wp1 == null || wp2 == null){
             return null;
         }
        
        // find difference between lengths
         int dif = Math.abs(len(headA) - len(headB)); 
         ListNode start = null;
         ListNode start2 = null;

        // adjust the position of "start" pointer 
        // by skipping nodes which make difference between lengths
        if(len(headA) > len(headB)){
            start2 = headB;
            start = headA;
            int count = dif;

            while(count != 0){
                start = start.next;
                count--;
            }
        }
        else if(len(headA) < len(headB)){
            start2 = headA;
            start = headB;
            int count = dif;

            while(count != 0){
                start = start.next;
                count--;
            }
        }
        else{
           start = headA; 
           start2 = headB;
        }

        // find intersection
         while(start != null && start2 != null){
             if(start == start2){
                 return start;
             }
             start = start.next;
             start2 = start2.next;
         }
         return null;
        
}
}