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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*>M;
        while(headA){
            M.insert(headA);
            headA = headA->next;

        }
         while(headB){
             if(M.find(headB)!= M.end()){
                 return headB;
             }
             
             headB = headB->next;
         }
        return headB;
    }
};
