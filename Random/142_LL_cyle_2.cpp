/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// Tortoise Hare method
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head; 
        ListNode* fast = head;
        while(fast!=nullptr and fast->next!=nullptr){
            slow = slow->next ;
            fast = fast->next->next; 

            if(slow == fast){
                slow = head; 
                while(slow!=fast){
                    slow = slow->next; 
                    fast = fast->next; 
                } 
                return slow; 
            }
        } 
        return NULL; 
        
    }
};