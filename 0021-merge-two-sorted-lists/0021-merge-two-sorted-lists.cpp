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

    // first solution

  /*  void insert(ListNode** root, int item)
{
    ListNode* temp = new ListNode;
    ListNode* ptr;
    temp->val = item;
    temp->next = NULL;
  
    if (*root == NULL)
        *root = temp;
    else {
        ptr = *root;
        while (ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = temp;
    }
}
ListNode *arrayToList(vector<int> arr)
{
    ListNode *root = NULL;
    for (int i = 0; i < arr.size(); i++)
        insert(&root, arr[i]);
   return root;
}
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> v;
        ListNode* wp = list1;
        ListNode* wp2 = list2;
        while(wp!=NULL){
            v.push_back(wp->val);
            wp = wp->next;
        }
        while(wp2!=NULL){
            v.push_back(wp2->val);
            wp2 = wp2->next;
        }
        sort(v.begin(), v.end());
        return arrayToList(v);
    }*/


    // second solution
     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
         vector<int> temp;

        if(list1 == NULL){
            return list2;
        }
        if(list2 == NULL){
            return list1;
        }
        if(list1 == NULL && list2 == NULL){
            return list2;
        }

         ListNode* wp1 = list1;
         ListNode* wp2 = list2;

        // write list1 to the vector
         while(wp1!=NULL){
             temp.push_back(wp1->val);
             wp1 = wp1->next;
         }

        // write list2 to the vector
        while(wp2!=NULL){
             temp.push_back(wp2->val);
             wp2 = wp2->next;
         }

         // sort the vector
        sort(temp.begin(),temp.end());

        // create new list
        int i = 1;
        ListNode* list = new ListNode();
        list->val = temp[0];
        list->next = nullptr;
        ListNode* wp = list;
  
        // create new nodes and set values to vector's elements
        while(i<temp.size()){

            wp->next = new ListNode();
            wp->next->val = temp[i];
            wp->next->next = nullptr;
            wp = wp->next;
            i++;
        }

        return list;
     }

};