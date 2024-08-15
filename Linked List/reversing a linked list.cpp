#include <iostream> 
using namespace std; 

class node{ 
// 
public: 
int data; 
node *next; 
}; 

node* inserting(node*head,int d) //inserting at front of the list
{ 
node *new_n=new node(); 
new_n->data=d; 
new_n->next=head; 
return new_n; 
} 

node *reverse(node*head)
{ 
if(head != NULL) 
{ 
node* prevNode = head; 
node* tempNode = head; 
node* curNode = head->next; 
prevNode->next = NULL; 
prevNode->prev = NULL;
 
while(curNode != NULL) //traversing until the end
{ 
tempNode = curNode->next;  
curNode->next = prevNode; 
prevNode->prev = curNode; // Swapping the elements and reversing the list
prevNode = curNode; 
curNode = tempNode; 
}
head = prevNode; 
} 
return head; // return the new head after reversing the list 
} 

void print(node*head)
{ 
node *curr= head; 
while(curr!=NULL) // tranversing until the ensd of the linked list
{ 
cout<<curr->data; 
curr=curr->next; 
} 
} 

int main() 
{ 
node *head=NULL; 
head=inserting(head,3); 
head=inserting(head,4); 
head=inserting(head,5); 
head=inserting(head,8); 
head=inserting(head,7); 
print(head); 

cout<<endl<<"Reverse:"; 
head=reverse(head); 
print(head); 

return 0; 
}  