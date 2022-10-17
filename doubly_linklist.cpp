#include<iostream>
using namespace std;

class node {
    public :

    int data;
    node*previous;
    node*next;

    node(int value)
    {
        this->data= value;
        this->next= NULL;
        this->previous=NULL;
    }
};

void insertAthead(node*&head, int value)
{
    node*n= new node(value);
    n->next=head;
    head->previous=n;
    head=n;
}

void insertAtposition(node* & head, node* 
& tail, int position, int value){

    //insertion at first
    
    if(position==1){
        insertAthead(head, tail ,value);
        
            return;
        
    }
       
       //insertion at specific

        node*temp = head;
        int count = 1;
        while(count<position-1)
        {
            temp ->next;
            count ++;
        }

      //insertion at last
      if(temp->next==NULL)
      {
        insertAttail( head ,tail,value);
        return;
        
      }

      //creation of node

      node*nodetoinsert=new node(value);
      nodetoinsert->next=temp->next;
      temp->next->previous=nodetoinsert;
      temp->next=nodetoinsert;
      nodetoinsert->previous=temp;

}




void insertAttail(node*&tail, int value)
{
    node*n = new node(value);
   tail->next=n;
   n->previous=tail;
   tail=n;
}
void display(node*head)
{
    node*temp= head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

}

int main()
{

    node*n= new node(10);
    node*head= n ;
    node*tail=n;
    display( head);
    insertAthead(head, 9);
    display(head);
    insertAttail(tail, 11);
    display(head);
    insertAtposition(head , tail , 3, 12);
    display(head);

    return 0;
}