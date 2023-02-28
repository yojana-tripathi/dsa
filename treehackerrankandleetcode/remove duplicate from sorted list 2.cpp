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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
         ListNode* prev = new ListNode(0);
        ListNode *temp = head;
         head = prev;
        while(temp !=NULL && temp->next !=NULL){
            if(temp->next !=NULL && temp->next->val== temp->val){
               while(temp->next !=NULL && temp->next->val==temp->val){
                   temp = temp->next;
                }
                prev->next = temp->next;
			} 
            else {
				prev ->next = temp;
				prev = prev->next;
			}
			temp = temp->next;
		}
		return head->next;
        
    }
};
