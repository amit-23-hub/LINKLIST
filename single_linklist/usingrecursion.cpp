#include<iostream>
#include <bits/stdc++.h>
using namespace std;

 class node{
    public:
    int data ;
    node* Next ;


    node(int d){
        data = d ;
        Next = NULL ;
    }
 };

 node* createlinklist(int arr[],int index , int size ){
    // base class 
    if(index==size){
        return NULL ;
    }
        
        
     node *temp ;
     temp = new node(arr[index]);
    temp->Next = createlinklist(arr,index+1,size);
return temp ;
 }

 void print(node* head){
    node* temp = head ;
    while(temp){
        cout<<temp->data<<"->";
        temp = temp->Next ;
    }
 }

int main()
{

     node *head ;
     head = NULL ;
     int arr[]={2,3,4,5,6};
     head = createlinklist(arr,0,5) ;
    // at any postion 

        int x = 3 ; // position

       int  value = 30;
       
        node *temp = head ;
        while(x--){
            temp = temp->Next ;
        }
        node *temp2 = new node(value);
        temp2->Next = temp->Next ;
        temp->Next = temp2 ;

    


     print(head);
    return 0;
}