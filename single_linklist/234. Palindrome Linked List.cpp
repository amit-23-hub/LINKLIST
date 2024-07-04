//   method2 


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
    bool isPalindrome(ListNode* head) {


        if (head->next == NULL){
            return 1 ;
        }
         int count = 0 ;


         ListNode *temp  = head ;
        while(temp){
            count++ ;
            temp=temp->next ;
        }

        count = count/2 ; 
          ListNode *cur=head ;
          ListNode *pre = NULL ;
        while (count--){
                pre = cur ;
                cur = cur->next ;
        }
        pre->next = NULL ;
        // i have to reverse second part 

        pre = NULL ;

        ListNode *front = cur ;

        while(front){
            front  = cur->next ;
            cur->next = pre ;
            pre = cur ;
            cur = front ;

        }
      // checking for palindrome 
        ListNode *head1  = head ;
        ListNode *head2 = pre;

        while (head1){
            if(head1->val != head2->val){
                return  0 ; 
            }

            else {
                head1 = head1->next ;
                head2  = head2->next ;
            }
        }
return 1 ;

    }
};
 
 
 
 
 
 
 
 
 
 ///  method 1 
 // in o(N) space


class Solution {
public:
    bool isPalindrome(ListNode* head) {
               vector<int>ans ;

               ListNode *temp = head ;

               while(temp){
                ans.push_back(temp->val);

               };

               int n = ans.size();

              int l = n-1 ;
              int i = 0 ;
              while(i<=l){
                if(ans[i]==ans[l]){
                    i++ ;
                    l-- ; 
                }else {
                    return false ;
                }

              }
              return true ;
    }
};