#include <iostream> 
using namespace std; 

class node{ 
// singly inked list
public: 
int data; 
node *next; 
}; 

node* inserting(node*head,int d) // inserting the element at front
{ 
node *new_n=new node(); 
new_n->data=d; 
new_n->next=head; 
return new_n; 
} 

void removedup(node* head){ 
    node *curr= head; 
    node *ind,*temp; 
    if(head==NULL) 
    return ; 
    else{ 
        while(curr!=NULL) //traverse until the end
{ 
            temp=curr; 
            ind=curr->next; 
            while(ind!=NULL) traverse until reaching the element  before last element
{ 
                if(curr->data==ind->data) 
                temp->next=ind->next; 
                else 
                temp=ind; 
                ind=ind->next; 
            } 
           curr=curr->next;
}
} 
} 

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
    removedup(head); 
    print(head); 

    return 0; 
}
 