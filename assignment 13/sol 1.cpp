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
    void displayList(ListNode *list){
   while (list != NULL) {
      cout << list-> data << " ";
      list = list->next;
   }
   cout << endl;
}   
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
         ListNode* ans = NULL;
        if (list1 == NULL) {
            return list2;
        }
        if (list2 == NULL) {
            return list1;
        }
        if (list1->data < list2->data) {
            ans = list1;
            ans->next = mergeTwoLists(list1->next, list2);
        } else {
            ans = list2;
            ans->next = mergeTwoLists(list1, list2->next);
        }
        return ans;
    }
        
    }
};
