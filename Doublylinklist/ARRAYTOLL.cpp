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
    printting(head);

    
    return 0;
}