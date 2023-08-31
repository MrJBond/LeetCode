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

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
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
    }

};