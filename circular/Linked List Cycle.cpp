/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


class Solution {

public:

// method 1

 //  bool  check(ListNode *cur , vector<ListNode*>visited){
//     for(int i = 0 ; i<visited.size();i++){
//         if(cur == visited[i]){
//             return 1 ;
//         }
//     }
//     return 0 ;
// }
   bool hasCycle(ListNode *head) {
//         ListNode *cur = head ;
//         vector<ListNode*> visited ;

//         while(cur != NULL){
//             if(check(cur , visited)){
//                 return 1 ;
//             }
//             visited.push_back(cur) ;
//             cur = cur->next ;
//         }
//         return 0 ; 
//     }

// methd 2 
    //      unordered_map<ListNode*,bool>m ;
    //      ListNode *cur = head;
    // while (cur != NULL) {
    //     if (m[cur] == true) {
    //         return true;
    //     }
    //     m[cur] = true;
    //     cur = cur->next;
    // }
    // return false;


    // method 3 

     ListNode *slow  = head ;
     ListNode *fast = head ;
     while(fast !=NULL && fast->next !=NULL){
        slow=slow->next ;
        fast = fast->next->next ;

        if(slow== fast ){
            return true ;
        }
     }
      return false ;
   }
};