class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        if (!head || !head->next) return; 
        Node *slow = head ;
        Node *fast = head ;
        
        while(fast !=NULL &&  fast->next != NULL){
            slow = slow->next ;
            fast = fast->next->next ;
            
            if(slow == fast){
                break ;
            }
        }
        
        // for the case when there is no loop wexit 
        
        if(fast == NULL || fast->next == NULL) {
    return;
}

        
        // move the slow pointer to head 
        
        slow = head ;
        
        while(slow != fast){
            slow = slow->next ;
            fast = fast->next ;
        }
        
        // now move slow pointer to get slow->next = fast
        
        while (slow->next != fast){
            slow = slow->next ;
        }
        slow->next = NULL ;
        
      
    }
};