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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp = head ; 
        int cnt = 0 ;
        while(temp){
            cnt++;
            temp=temp->next ;

        }

        // getting wihich node i havvvvvvvvve to delete 
        cnt=cnt-n;
          // for handling edge case when  cnt=n 
          if(cnt==0){
            temp = head ;
            head = head->next ;
            delete temp ;
            return head ;
          }

        ListNode *cur = head ;
        ListNode *pre = NULL ;
        while(cnt--){
                 pre = cur ;
                 cur = cur->next ;

        }

        // now i have to deleete 
        pre->next = cur->next ;
        delete cur ;
        return head ;
    }
};