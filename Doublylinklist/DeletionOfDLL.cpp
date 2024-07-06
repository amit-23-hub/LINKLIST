#include<iostream>
#include <bits/stdc++.h>
using namespace std;


 class node {
    public:

    int data ;
    node* next;
    node *pre ; 
    node(int d){
        data =  d ;
        next = NULL;
        pre = NULL;
    }
 };
 void printting (node *head){
    node *traverse = head ;
     while(traverse){
   std :: cout<<traverse->data<<" " ;
    traverse = traverse->next ;

   }

} ;

int main()
{

    int arr[] = {1,2,3,4,5,6};
    node * head = NULL ;
    node * tail = NULL ;
    for(int i = 0 ; i<6;i++){
        if(head==NULL){
            head = new node(arr[i]);
            tail = head ;
        }
        else{
            node *temp = new node(arr[i]);
            tail->next = temp ;
            temp->pre = tail ;
            tail = temp ;
        }
    }



       int pos=1;

       if(pos==1){
        if(head->next == NULL){
            delete head;
            head = NULL ;
        }
        // if more than 1  node exist then 
        else{
            node *temp = head ;
            head = head->next ;
            head->pre = NULL ;
            delete temp ;
        }
       }else {
        // delete end and delete middle 

        node *cur = head ;
        while(--pos){
            cur = cur->next ;
        }
        if(cur->next==NULL){
            cur->pre->next = NULL ;
            delete cur ;
        }else{
            cur->pre->next = cur->next ;
            cur->next->pre = cur->pre ;
            delete cur ;
        }
       }


    printting(head);

    
    return 0;
}