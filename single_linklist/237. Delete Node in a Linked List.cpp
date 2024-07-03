class Solution {
public:
    void deleteNode(ListNode* curr) {
    ListNode* temp = curr->next; 
    curr->val = temp->val;       
    curr->next = temp->next;     
    
    delete temp;   
    }
};