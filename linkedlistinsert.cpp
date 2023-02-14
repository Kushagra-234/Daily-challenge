#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int value;
    node*next;
    // ek node banana

};

// void insertatfront( node **head,int newvalue)
// {
    // nayanode bnao
    // node* nayanode=new node(); 
    // usko value allocate kro
    // nayanode->value=newvalue;
    // usko link karao pehle element se
    // nayanode->next=*head;
    // usko head bnao
    // *head=nayanode;



// }

  void insertatrandom(node*previous,int newvalue)
  {
    //   check kro agar previous null na ho
    if(previous==NULL)
    {
        cout<<"cannot be null"<<endl;
    }
    //  naya node bnao
    node* nayanode=new node();
    // insert after previous
    nayanode->next=previous->next;
    previous->next=nayanode;
  }

// void insertatend(node**head,int newvalue)
// {
    // nayanode bnao
    // node* nayanode=new node();
    // check karo agar empty hai linkedlist agar to insert krdo
    // if(*head=NULL)
    // {
        // *head=nayanode;
    // }

    // find last node
    // node*temp=*head;
    // while(temp->next!=NULL)
    // {
        // temp=temp->next;


    // }
    // last me insert kr dia
    // temp->next=nayanode;

    
// }

void printlist(node*n)
{
    while (n!=NULL)
    {
        cout<<n->value<<endl;
        n=n->next;
    }
    
}
int main(){
    node* head=new node();
    node* second=new node();
    node* third=new node();
    // memory allocate krna 

    head->value=1;
    head->next=second;
    second->value=2;
    second->next=third;
    third->value=3;
    third->next=NULL;

    // insertatfront(&head,-1);
    // insertatend(&head,4);
    insertatrandom(head,-1);


    printlist(head);

return 0;
}