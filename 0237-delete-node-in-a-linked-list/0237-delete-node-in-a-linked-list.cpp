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
    void deleteNode(ListNode* node) {
        ListNode* wp = node;
        vector<int> v;
        ListNode* last;
        ListNode* secondLast;

        // write values to the vector
        while(wp!=NULL){
            v.push_back(wp->val);
            wp = wp->next;
 
        }

        v.erase(v.begin());

        // write from the vector to the list
        ListNode* wp1 = node;
        int i = 0;
        while(wp1!=NULL){
            wp1->val = v[i];
            wp1 = wp1->next;
            i++;
        }

        // find last node
        ListNode* p = node;
        while(p != NULL){
            if(p->next == NULL){
                last = p;
            }
            p = p->next;
        }

        // find second last none
        ListNode* w = node;
        while(w != NULL){
            if(w->next == last){
                secondLast = w;
            }
            w = w->next;
        }
        
        // delete last node
        delete (last);
        secondLast->next = NULL;
    }
};