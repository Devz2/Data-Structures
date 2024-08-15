#include <iostream> 
using namespace std; 
class node{ 
//Defining the class node for linked list
public: 
int data; 
node *next; 
}; 

node* inserting(node*head,int d)//inserting the new element in front and change the head
{ 
node *new_n=new node(); 
new_n->data=d; 
new_n->next=head; 
return new_n; 
} 

void deleting(node*head)//deleting the last element in list
{ 
node *curr=head; 
while(curr->next->next!=NULL)//traversing the curr pointer before the last element
{ 
curr=curr->next; 
} 
node *t=curr->next; //save the last element in t 
curr->next=NULL; //and change the curr element next to null
delete t; //delete the t or last element
} 

void print(node*head)
{ 
node *curr= head; 
while(curr!=NULL) // Traversing until the end of the list
{ 
cout<<curr->data; 
curr=curr->next; 
} 
} 

int main() 
{ 
node *head=NULL; 
head=inserting(head,7);//inserting the element and change the head 
head=inserting(head,4); 
head=inserting(head,6); 
head=inserting(head,3); 
head=inserting(head,9); 
cout<<"Printing the linked list:"; 
print(head); 

cout<<endl<<"Deleting the last element:"; 
deleting(head); 
print(head); 

return 0; 
} 