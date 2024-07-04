class Solution {
    public:
    Node* deleteK(Node *head,int K){
      //Your code here
      
      int count = 0 ;
      Node *pre= NULL ;
      Node *cur = head ;
     if(K==1){
         return NULL ;
     }
      
      while(cur){
           count++;
          if(count == K ){
              pre->next = cur->next ;
              cur=cur->next ;
              count = 0 ;
          }else{
              pre=cur ;
              cur=cur->next ;
          }
      }
     return head ;
    }
};