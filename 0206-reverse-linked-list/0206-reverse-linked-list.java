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

    // first solution

    /*public ListNode reverseList(ListNode head) {
        int temp;
        ListNode wp = head;
        while(wp!=null){
            ListNode wpn = wp.next;
            while(wpn!=null){
                temp = wp.val;
                wp.val = wpn.val;
                wpn.val = temp;

                wpn=wpn.next;
            }
            wp = wp.next;
        }
        return head;
    }*/

    // second solution

    int size(ListNode head){
        ListNode wp = head;
        int res = 0;
        while(wp != null){
            res++;
            wp = wp.next;
        }
        return res;
    }

    public ListNode reverseList(ListNode head) {
        int listSize = size(head);

        // init array with all zeros
        int [] array = new int[size(head)];
        Arrays.fill(array, 0);

        // write elements in the reverse order to the array
        ListNode wp = head;
        int i = 0;
        while(wp!=null){
            array[listSize - i -1] = wp.val;
            i++;
            wp = wp.next;
        }

        // write elements to the list
        wp = head;
        i = 0;
        while(wp!=null){
            wp.val = array[i];
            i++;
            wp = wp.next;
        } 
        return head;
    }
}