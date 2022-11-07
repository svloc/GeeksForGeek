#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
    int data;
    Node* next;
};

class SL{
    public:
    Node *head,*last;
    void insert();
    void display();
    SL(){
        head=NULL;
    }
};

void SL::insert(){
    
   int ch1;
    do{
    int val;
    cout<<"Enter Data: ";
    cin>>val;
    int ch;
    cout<<"Insert at: \n1]Start\n2]End: "<<endl;
    cin>>ch;
    Node *temp=new Node;

    
        switch(ch){
            case 1:
          
            temp->data=val;
            temp->next=NULL;
            if(head==NULL){
             head=temp;
             last=temp;
            }
            else{
                temp->next=head;
                head=temp;
            }
            cout<<"Data added---->"<<endl;
            break;
    
            case 2:
           // Node *temp=new Node;
            temp->data=val;
            temp->next=NULL;
            if(head==NULL)
            {
                head=temp;
                last=temp;
            } 
            else{
                while(head->next!=NULL){
                    head=head->next;
                }
                head->next=temp;
                temp->next=NULL;

            }
             cout<<"Data added---->"<<endl;
            break;
        }

    
    cout<<"Do you want to continue: 1 or 0: ";
    cin>>ch1;
    }
    while(ch1==1);

}

void SL::display(){
    while(head->next!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
    SL obj;
    obj.insert();
    obj.display();
 return 0;
}