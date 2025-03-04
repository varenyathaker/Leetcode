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
    
    ListNode* reverse(ListNode* head) {
            vector <int> ans; 
            ListNode* temp = head; 
            int i = 0;
            while(temp!=NULL){
                ans.push_back(temp->val); 
                temp = temp->next;
                i++; 
            }
             
            temp = head; 
            int j = 0; 
            while(temp!=NULL){
                temp->val = ans[i-j-1]; 
                j++;
                temp = temp->next;
            }
            return head; 
        }
    
    
        bool isPalindrome(ListNode* head) {
            ListNode* slow = head;  
            ListNode* fast = head;
            while(fast->next!=NULL and fast->next->next != NULL){
                slow = slow->next; 
                fast = fast->next->next; 
            }  
            ListNode* newhead = reverse(slow->next); 
            ListNode* first = head; 
            ListNode* second = newhead; 
            while(second!=NULL){
                if(first->val != second->val){
                    return false;
                }
                first = first->next; 
                second = second->next; 
            }
            return true; 
            
        }
    };