
class Node{

    public:
    int data;
    Node* next;


};

#include<bits/stdc++.h>
using namespace std;


//  void insert(Node* &head){
//      Node* newnode=new Node();
//      newnode->data=7;
//      newnode->next=head;
//      head=newnode;

//  }

//  void insertatrandom(Node* head,int n){
//      int i=0;

//      Node* newnode=new Node();
//      newnode->data=11;

//      if(n==2){
//          newnode->next=head->next;
//          head->next=newnode;

//      }

//      Node* temp=head;

     
//      while(i<n-2){
//          temp=temp->next;
//          i++;
//      }

//        newnode->next=temp->next;
//        temp->next=newnode;
     

    
    

//  }


void printlist(Node* n){

    while(n !=NULL){
        cout<<n->data<<endl;
        n=n->next;
    }
}


    void deleteit(Node* &head,int pos){

        if(pos==1)
            head=head->next;

         if(pos==2){
             head->next=head->next->next;
         }

         Node*temp=head;
         Node* prev=NULL;
         int i=0;

         while(i<pos-1){
             prev=temp;
             temp=temp->next;
             i++;
         }
         prev->next=temp->next;
        


    }




int main(){

    Node* head=new Node();
    Node* second=new Node();
    Node* third=new Node();

    head->data=87;
    head->next=second;
    second->data=6;
    second->next=third;
    third->data=40;
    third->next=NULL;


    cout<<"enter pois"<<endl;
     int pos;

    cin>>pos;

    deleteit(head,pos);


    printlist(head);
    // insert(head);
    // printlist(head);

    // cout<<"enter position at which you want to insert "<<endl;
    // int n;
    // cin>>n;

    // insertatrandom(head,n);
    // printlist(head);


return 0;
}