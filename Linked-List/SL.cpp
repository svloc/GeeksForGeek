#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};

class SL{
    public:
  Node *head,*last;
  SL(){
    head=NULL;
  }
  void Insert();
  void Display();
};

void SL::Insert(){
    int ch2;
    do{
    int val;
    cout<<"Enter Data: ";
    cin>>val;
    int ch;
    cout<<"Enter Your Choice: \n1]At Beginning\n2]At End\n3]At given Postion:"<<endl;
    cin>>ch;
    Node *temp=new Node;
    temp->data=val;
    temp->next=NULL;
    switch (ch)
    {
    case 1:
        if(head==NULL){
            head=temp;
        }
        else{
           temp->next=head;
           head=temp;
        }
        
        cout<<"Data added .."<<endl;
        break;
    
    case 2:
        if(head==NULL){
            head=temp;
        }
        else{
           Node* newTemp=head;
          while(newTemp->next!=NULL){
            newTemp=newTemp->next;
          }
          newTemp->next=temp;
        }

        cout<<"Data added .."<<endl;
        break;

    case 3:
        int pos;
        cout<<"Enter Position: ";
        cin>>pos;

        if(pos==1){
           if(head==NULL)
           head=temp;
           else{
            temp->next=head;
            head=temp; 
           }
        }

        int c=1;
        Node* temp2=head;
        while(c<pos-1){
            c++;
            temp2=temp2->next;
        }
        temp->next=temp2->next;
        temp2->next=temp;
        

        cout<<"Data added ..";
        break;
    }

    cout<<"\nEnter Your Choice: 1 or 0: ";
    cin>>ch2;
    }while(ch2==1);

}

void SL::Display(){
    Node *temp=head;
    while(temp->next!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data<<" ";
}

int main(){
    SL obj;
    obj.Insert();
    obj.Display();
    return 0;
}