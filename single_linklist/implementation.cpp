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

// creating linklist using recursion ;

node* createlinkedlist(int arr[],int index , int size){

    // base case 
    if(index==size){
        return NULL ;
    }

    node *temp ;
    temp->next = createlinkedlist(arr, index+1,size);

    return temp ;

}


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

       node *tempptr =head ; // creating a temprory pointer 

       // getting last node
       while(tempptr->next !=NULL){
        tempptr=tempptr->next;
       }

       // creating new node 
       

       // connecting 
       tempptr->next=new node(20);
    
       // for printing 

       node *temp ; 
       temp = head;
       while(temp !=NULL){
        cout<<temp->data<<" " ;
        temp=temp->next ;
       }
    return 0;
}