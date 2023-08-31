/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:

    // brute force solution (two loops)

    /*ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *wp1 = headA;
        ListNode *res = NULL;
        while(wp1!=NULL){
            ListNode *wp2 = headB;
            while(wp2!=NULL){
                if(wp1 == wp2){
                    return wp2;
                }
                wp2=wp2->next;
            }
            wp1=wp1->next;
        }
        return res;
    }*/


    // O(n+m)

    int len(ListNode * l){
        ListNode * wp = l;
        int count = 0;

        while(wp != NULL){
            count++;
            wp = wp->next;
        }
        return count;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
         ListNode *wp1 = headA;
         ListNode *wp2 = headB;
        
        // there is no intersection
        if(wp1 == NULL || wp2 == NULL){
             return NULL;
         }
        
        // find difference between lengths
         int dif = abs(len(headA) - len(headB)); 
         ListNode* start = NULL;
         ListNode* start2 = NULL;

        // adjust the position of "start" pointer 
        // by skipping nodes which make difference between lengths
        if(len(headA) > len(headB)){
            start2 = headB;
            start = headA;
            int count = dif;

            while(count != 0){
                start = start->next;
                count--;
            }
        }
        else if(len(headA) < len(headB)){
            start2 = headA;
            start = headB;
            int count = dif;

            while(count != 0){
                start = start->next;
                count--;
            }
        }
        else{
           start = headA; 
           start2 = headB;
        }

        // find intersection
         while(start != NULL && start2 != NULL){
             if(start == start2){
                 return start;
             }
             start = start->next;
             start2 = start2->next;
         }
         return NULL;
        
}
};