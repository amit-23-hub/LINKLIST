#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *Next;

    node(int d)
    {
        data = d;
        Next = NULL;
    }
};

node *createlinklist(int arr[], int index, int size)
{
    // base class
    if (index == size)
    {
        return NULL;
    }

    node *temp;
    temp = new node(arr[index]);
    temp->Next = createlinklist(arr, index + 1, size);
    return temp;
}

void print(node *head)
{
    node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->Next;
    }
}

int main()
{

    node *head;
    head = NULL;
    int arr[] = {2, 3, 4, 5, 6};
    head = createlinklist(arr, 0, 5);
    // at any postion

    int x = 3; // position

    int value = 30;

    node *temp = head;
    while (x--)
    {
        temp = temp->Next;
    }
    node *temp2 = new node(value);
    temp2->Next = temp->Next;
    temp->Next = temp2;

    // delete from begining

    if (head != NULL)
    {
        node *temp = head;
        head = head->Next;
        delete temp;
    }
    // delete last node
    if (head != NULL)
    {

        if (head->Next == NULL)
        {
            node *temp = temp;
            head = NULL;
            delete temp;
        }
        else
        {
            node *prev = NULL;
            while (temp->Next != NULL)
            {
                prev = temp;
                temp = temp->Next;
            }
            delete temp;
            prev->Next = NULL;
        }
    }


    // middle 
   int p=2 ;
    if (    x==1 ){
        node *temp = head ;
        head = head->Next;
        delete temp ;
    }
    p-- ;

    node *curr = head ;
    node *prev = NULL;
    while(p--){
        prev = curr ;
        curr = curr->Next ;
    }
    prev->Next = curr->Next ;
    curr->Next  = NULL ;
    delete curr ;
    


    print(head);
    return 0;
}