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
    ListNode* partition(ListNode* head, int x) {
       ListNode *fNode = new ListNode(0);
        ListNode*bNode = new ListNode(0);
        ListNode*front = fNode, *back = bNode, *curr = head;
        while (curr) {
            if (curr->val < x) front->next = curr, front = curr;
            else back->next = curr, back = curr;
            curr = curr->next;
        }
        front->next = bNode->next, back->next = NULL;
        return fNode->next;
    }
};
