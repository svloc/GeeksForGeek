#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
class SL{
    public:
    Node *head;
    SL(){
        head=NULL;
    } 
    void insert();
    void display();
    void reverse();
};

void SL::insert(){
    int ch;
    do{ 
        int val;
        cout<<"\nEnter Data: ";
        cin>>val;
        Node *temp=new Node;
        temp->data=val;
        temp->next=NULL;
        if(head==NULL)
        head=temp;
        else{
            Node *t=head;
            t->next=temp;
            head=temp;
        }
        cout<<"\nEnter Ch: ";
        cin>>ch;
    }while(ch==1);
}

void SL::display(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void SL::reverse(){
   Node* curr=head;
   Node* pre=NULL;
   Node* forw=NULL;

   while(curr!=NULL){
    forw=curr->next;
    curr->next=pre;
    pre=curr;
    curr=forw;
   }
}

int main(){
    SL obj;
    obj.insert();
    obj.display();
    obj.reverse();
    obj.display();
    return 0;
}