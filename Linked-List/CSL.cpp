#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next; 
};
class CSL{
    public:
    void Insert();
    void Dispaly();
    Node* tail;
    CSL(){
        tail=NULL;
    }
};

void CSL::Insert(){
   int ch2;
   do{
    int val;
    cout<<"Enter Data: ";
    cin>>val;
    
    Node* temp=new Node;
    temp->data=val;
    temp->next=NULL;
    if(tail==NULL){
        tail=temp;
        temp->next=temp;
    }
    else{
    cout<<"Enter Ele: "<<endl;
    int ele;
    cin>>ele;
    Node* curr=tail;
    while(curr->data!=ele){
        curr=curr->next;
    }
    temp->next=curr->next;
    curr->next=temp;

    }
    cout<<"\nContinue 1 or 0: ";
    cin>>ch2;
   }while(ch2==1);
}
void CSL::Dispaly(){
  Node* temp=tail;
  do{
    cout<<temp->data<<" ";
    tail=tail->next;
  }while (tail!=temp);
  
}

int main(){
    CSL obj;
    obj.Insert();
    obj.Dispaly();
    return 0;
}