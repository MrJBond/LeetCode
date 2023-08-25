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
// first solution (two loops)

    /*ListNode* reverseList(ListNode* head) {
        ListNode* wp = head;
        int temp;
        while(wp != NULL){
            ListNode* next = wp->next;
            while(next != NULL){
                temp = wp->val;
                wp->val = next->val;
                next->val = temp;
                next = next->next;
            }
            wp = wp->next;
        }
        return head;
    }*/

    // second solution
    int size(ListNode* head){
        ListNode* wp = head;
        int res = 0;
        while(wp!=NULL){
            res++;
            wp = wp->next;
        }
        return res;
    }
    ListNode* reverseList(ListNode* head) {

        // find size
        int listSize = size(head);

        // init vector with all zeros
        vector<int> v(size(head), 0);
        ListNode* wp = head;

        // write elements to the vector in reverse order
        int i = 0;
        while(wp!=NULL){
            v[listSize-1-i] = wp->val;
            i++;
            wp = wp->next;
        }

        // write elements from the vector to the list
        wp = head;
        i = 0;
        while(wp!=NULL){
            wp->val = v[i];
            i++;
            wp = wp->next;
        }
        return head;
    }
};