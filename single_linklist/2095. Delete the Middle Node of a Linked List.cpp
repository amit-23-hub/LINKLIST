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
    ListNode* deleteMiddle(ListNode* head) {


        
         ListNode *temp = head ;



         int count = 0 ;
         while (temp){
            count++ ;
            temp = temp->next ;
         }
         if(count==1){
            return NULL ;
         }
         count = count/2 ;

          ListNode *pre = NULL ;
           ListNode *cur = head ;
           while(count--){
            pre = cur ;
            cur=cur->next ;
           }
           pre->next = cur->next ;
           cur->next = NULL ;          
           return head ;
    }
};