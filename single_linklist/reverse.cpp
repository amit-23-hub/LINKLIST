
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int>ans ;
        ListNode *temp = head ;
        while(temp != NULL){
            ans.push_back(temp->val);
            temp = temp->next ;
        }

        // for inserting from end of vector 
        int i = ans.size()-1 ;
           temp = head ;
        while(temp !=NULL){

               temp->val = ans[i];
               i-- ;
               temp = temp->next ;
        }
        return head ;
        
    }
};