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
 import java.util.*;
class Solution {

    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        
        if(list1 == null){
            return list2;
        }
        if(list2 == null){
            return list1;
        }
        if(list1 == null && list2 == null){
            return list1;
        }

        Vector<Integer> list = new Vector<Integer>();

        ListNode wp1 = list1;
        ListNode wp2 = list2;

        while(wp1!=null){
            list.add(wp1.val);
            wp1 = wp1.next; 
        }
        while(wp2!=null){
            list.add(wp2.val);
            wp2 = wp2.next; 
        }

         Collections.sort(list);
        
        ListNode l = new ListNode();
        l.val = list.get(0);
        l.next = null;

        int i = 1;
        ListNode wp = l;

        while(i<list.size()){
            wp.next = new ListNode();
            wp.next.val = list.get(i);
            wp.next.next = null;
            wp = wp.next;
            i++;
        }
        return l;

    }
}