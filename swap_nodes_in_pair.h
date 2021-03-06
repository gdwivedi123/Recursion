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
    ListNode* swapPairs(ListNode* head) {
        if( head == NULL || head -> next == NULL)
            return head;
        else
        {
            ListNode* to_return = head -> next ;
            head -> next = swapPairs(head -> next -> next);
            to_return -> next = head;
            return to_return;
        }
        
    }
};