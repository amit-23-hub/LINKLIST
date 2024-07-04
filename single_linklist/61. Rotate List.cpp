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
    ListNode* rotateRight(ListNode* head, int k) {

        if(head == NULL ||  head->next == NULL){
            return head ;
        }
        ListNode *temp = head ;

        int count = 0 ;
        while(temp){
            count++ ;
            temp=temp->next ;
        }

        k=k%count ; // for handling the case when k is more than count then we dont need to rotate xtra
         count = count-k ;
        if(k==0){
            return head ;
        }
        ListNode *cur = head ;
        ListNode *pre = NULL ;
          while(count--){
            pre=cur ;
            cur = cur->next ;
          }
          pre->next = NULL ;
           //  i have to go on last node and connect it to 1st 

          ListNode *tail = cur;
        while (tail->next != NULL) {
            tail = tail->next;
        }
        tail->next = head;

        return cur;
        
    }
};