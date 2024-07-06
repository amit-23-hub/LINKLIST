#include<iostream>
#include <bits/stdc++.h>
using namespace std;


class node{

public :
int data ;
node *next ;
node *pre ;



node(int d){
    data = d ;
    next = NULL ;
    pre = NULL ;
}



};
 void printting (node *head){
    node *traverse = head ;
     while(traverse){
    cout<<traverse->data<<" " ;
    traverse = traverse->next ;

   }

} ;



int main()
{
    node *head = NULL ;
    // case for handling insertion at head 
int pos = 0 ;
  // insert at begining 
    if(pos==0){
        if(head==NULL){

            head = new node (5);

        }else{
            node *temp = new node(10);
            temp->next = head ;
            head->pre = temp ;
            head = temp ;
        }
    }
    
    else{
        // insert at end 


        node *curr = head ;
        while(pos--){

            curr = curr->next ;

        }

        // reached at inserting position either it will be end or any postion 


        // handle end condition

        if(curr->next==NULL){



            node *temp = new node(20);
            temp->pre = curr ;
            curr->next = temp ;
        }else{
        

            node *temp = new node(30);
            curr->next = temp ;
            temp->pre = curr ;
            temp->next = curr->next ;
            curr->next->pre = temp ;
                  

        }
    }
    printting(head);


    return 0;
}