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
ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* curr = head;

    while (curr != nullptr) {
        ListNode* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }

    return prev;
}
    int pairSum(ListNode* head) {
        int size = 0; 
        ListNode* temp = head;
        while(temp!=NULL){
            temp = temp->next; 
            size++; 
        }

        temp = head;

        for(int i = 0 ; i < size/2; i++){
            temp = temp->next; 
        }

        ListNode* head2 = reverseList(temp); 

        int ans = 0; 
        for(int i =0 ; i < size/2; i++){
            ans = max(ans, head->val+head2->val); 
            head=head->next; 
            head2=head2->next; 
        }

        return ans;
    }
};