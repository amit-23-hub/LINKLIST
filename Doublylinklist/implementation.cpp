#include<iostream>
#include <bits/stdc++.h>
class node {
    public:
    int data ;
    node *pre ;
    node *next ;


    // constructor 
    node(int d){
        data = d ;
        pre = NULL ;
        next = NULL ;

    };
};

void printting (node *head){
    node *traverse = head ;
     while(traverse){
   std :: cout<<traverse->data<<" " ;
    traverse = traverse->next ;

   }

}

using namespace std;
int main()
{

 node *head = NULL ;

 // INSERT AT START
 // THE CASE WHEN THERE IS NO ELEMENT 


 if(head == NULL){
    head = new node(5);

 }

 // CASE WHEN THERE IS ALL READ A ANY NODE PRESENT 

      node * temp = new node(10);
      temp->next = head ;
      head->pre = temp ;
      head = temp ;
 

 // FOR INSERTING AT THE END OF THE NODE 

  // handling the edge case ;
  if(head ==  NULL){
    head =  new node(15);
  }


  // TRAVERSONG THE LL TO THE END 
   node *cur = head ;
   while(cur->next != NULL){
     cur = cur->next ;

   }
   temp = new node(20);
   cur->next = temp ;
   temp->pre = cur ;

  // printnig 
  printting(head);

  
    return 0;
}