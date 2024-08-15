#include <iostream> 
using namespace std; 

class node{ 
// singly linked list 
public: 
int data; 
node *next; 
}; 

node* inserting(node*head,int d)// inserting the new element in front 
{ 
node *new_n=new node(); 
new_n->data=d; 
new_n->next=head; 
return new_n; 
} 

void middle(node*head){ 
node*curr=head; 
int c=1; 
while(curr!=NULL) //traverse the pointer to the end of the linked list
{ 
curr=curr->next; 
c++; 
} 
curr=head; 

for(int i=1;i<(c/2);i++) // traversing the middle element 
curr=curr->next; 
cout<<curr->data; 
} 
}; 
 
int main() 
{ 
    node *head=NULL; 

    head=inserting(head,7); 
    head=inserting(head,4); 
    head=inserting(head,6); 
    head=inserting(head,3); 
    head=inserting(head,9); 
    head=inserting(head,9); 
    head=inserting(head,9); 
    print(head); 

    cout<<"Middle element:"; 
    middle(head); 
    return 0; 
}
