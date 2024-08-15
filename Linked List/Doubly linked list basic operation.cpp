#include <iostream> 
using namespace std; 

class node{
//Doubly linked list  
public: 
int data; 
node *next; 
node *prev; 
}; 

node* inserting(node*head,int d) // inserting the new element in the front of the linked list
{ 
node *new_n=new node(); 
new_n->data=d; 
new_n->next=head; 
new_n->prev=NULL; 
return new_n; 
} 

void deleting(node*head){ 
node *curr=head; 
while(curr->next->next!=NULL)// traversing curr pointer to element before last element
{ 
curr=curr->next; 
} 
node *t=curr->next; // save the last element in t 
curr->next=NULL; //change the curr element next to null
delete t; // delete the last element
} 

void print(node*head){ 
node *curr= head; 
while(curr!=NULL)// traversing to the last of linked list
{ 
cout<<curr->data; 
curr=curr->next; 
} 
}
 
int main() 
{ 
node *head=NULL; 

head=inserting(head,7);//inserting and changing the head in doubly linked list 
head=inserting(head,4); 
head=inserting(head,6); 
head=inserting(head,3); 
head=inserting(head,9); 
head=inserting(head,9); 
head=inserting(head,9); 
print(head); 

cout<<endl<<"after deleting:"; 
deleting(head); 

return 0; 
}