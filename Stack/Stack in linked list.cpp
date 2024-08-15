#include<iostream>
using namespace std;
class stacks
{
public:
    int data;
    stacks*next;
    stacks*top=NULL;

void push(int data)
{
    stacks*temp=new stacks();
    temp->data=data;
    temp->next=top;
    top=temp;
}
void descending( )
{
    /*if(top==NULL)
    {
        cout<<"stack is empty";
    }*/
   stacks* temp=top;
    while(temp!=NULL)
    {
       int maxi=temp->data;
        if(temp->data > maxi)
        {
             maxi=temp->data;
            //cout<<maxi<<endl;
           // temp=temp->next;

        }cout<<maxi<<endl;
            temp=temp->next;


        //temp=temp->next;
    }
}
void display()
{
    if(top==NULL)
    {
        cout<<"stack is empty"<<endl;
    }
    stacks*curr=top;
    while(curr!=NULL)
    {
        cout<<curr->data<<endl;
        curr=curr->next;
    }
        }
};
int main()
{
    stacks st;
    st.push(50);
    st.push(20);
    st.push(40);
    st.push(30);
    cout<<"original stack:"<<endl;
    st.display();
    st.descending();
    return 0;
}

