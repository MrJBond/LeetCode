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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> temp;

        if(lists.size() == 0){
            return nullptr;
        }

        // count empty lists
        int count = 0;
       for(int i =0; i<lists.size(); i++){
           if(lists[i] == nullptr){
               count++;
           }
       }

       // if all lists are empty
       if(count == lists.size()){
           return lists[0];
       }

        // write elements to the vector
        for(ListNode* list : lists){

            ListNode* wp = list;

            while(wp!=NULL){
                temp.push_back(wp->val);
                wp=wp->next;
            }
        }
        
        sort(temp.begin(), temp.end());

        // create result
        ListNode* res = new ListNode();
        res->val = temp[0];
        res->next = nullptr;

        ListNode* wp = res;

        // write elements to the result
        for(int i=0; i<temp.size(); i++){
            wp->val = temp[i];

            if(i != temp.size()-1)
                wp->next = new ListNode(temp[i]);

            wp = wp->next;
        }
        return res;
    }
};