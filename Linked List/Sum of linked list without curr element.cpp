#include<iostream> 
using namespace std; 

class Node 
{ 
// doubly linked list
public: 
int data; 
Node *next; 
Node *prev; 
}; 

Node *add(Node *head) 
{ 
Node * temp=head; 
int sum=0; 
if(head!=NULL) 
{ 
do 
{ 
sum+=temp->data; // find the sum of all element in linked list
temp=temp->next; 
}while(temp!=head); // traverse until the end of the list  
} 
temp=head; 
do 
{ 
int c=sum-temp->data;// subtract the curr element from sum 
temp=temp->next; 
cout<<c<<endl; 
}while(temp!=head); // traverse until the end of the list 
} 

int main() 
{ 
Node * head = new Node(); 
Node * fir = new Node(); 
Node * sec = new Node(); 
head->data=4; 
head->next=fir; 
head->prev=sec; 
fir->data=5; 
fir->next=sec; 
fir->prev=head; 
sec->data=6; 
sec->next=head; 
sec->prev=fir;// since it 's circular linked list, last element's next pointer points to first element

add(head);
return 0; 
}