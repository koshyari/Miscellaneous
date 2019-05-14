#include <iostream>
#include "llist.h"
using namespace std;
struct Node{
        int data;
        Node* next;
    };

Node* head = NULL;

void LinkedList::Insert(int x)
{
    Node* temp = new Node();
    temp->data=x;
    temp->next=head;
    head=temp;
}
void LinkedList::Print()
{
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp=temp->next;
    }
    cout << "\n";
}