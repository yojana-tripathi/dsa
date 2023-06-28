class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*result = new ListNode();
        ListNode *temp = result;
        int c=0;
        while(l1|| l2||c){
            int sum=0;
            if(l1){
                sum = sum + l1->val;
                l1 = l1->next;
            }
            if(l2){
                sum = sum+l2->val;
                l2 = l2->next;
            }
            sum = sum + c;
            c = sum/10; 
            ListNode * node = new ListNode(sum%10);
            temp ->next = node;
            temp = temp->next;

        }
         return result->next;
    }
};
