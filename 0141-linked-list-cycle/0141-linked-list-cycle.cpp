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
    bool hasCycle(ListNode *head) {

        if(head==NULL){
            return false;
        }
        ListNode *wp = head;
        ListNode *nextP = head;
        while(nextP!=NULL && nextP->next!=NULL){

            wp = wp->next;
            nextP = nextP->next->next; 
            if(wp == nextP){
                return true;
            }
        }

        return false;
    }
};