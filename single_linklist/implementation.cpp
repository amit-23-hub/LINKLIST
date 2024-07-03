#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class node {
    public:
int data ;
node* next;
// constructor
 node(int d){
    data =d ;
    next = NULL ;
 }

} ;

int main()
{
     node *head ; 
    head = NULL ;
     // insert elements  at begining 
     int arr[] = {2,4,6,8,10} ;
       for(int i=0 ; i<5;i++){
     // if linklist does not exist 
     if(head == NULL){
        head = new node(arr[i]);
     }
     else{
        node *temp = new node(arr[i]);
        temp->next = head;
        head = temp;
     }
       }

       // insert at end 

       node *tempptr =head ;

       // getting last node
       while(tempptr->next !=NULL){
        tempptr=tempptr->next;
       }

       // creating new node 
       node *tail = new node(20);

       // connecting 
       tempptr->next=tail ;
       tail->next=NULL ;




       // for printing 

       node *temp ; 
       temp = head;
       while(temp !=NULL){
        cout<<temp->data<<" " ;
        temp=temp->next ;
       }
    return 0;
}