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
  
    // using string
    bool isPalindrome(ListNode* head) {
        string s = "";
        string rev = "";
        ListNode* wp = head;
        while(wp!=NULL){
            s += to_string(wp->val); 
            wp = wp->next;
        }
        for(int i = s.length()-1; i != -1; i--){
            rev += s[i];
        }
        return (s == rev); 
    }
};