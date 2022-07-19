#include<bits/stdc++.h>
using namespace std;
class node{
  public:
    int data;
    node *next;
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
    int val;
    cout<<"Enter Data: ";
    cin>>val;
    int ch;
    cout<<"Insert at: 1]Start/n2]End";
    cin>>ch;
    do{
        switch(ch){
            case 1:
            temp=new node;
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
            
            break;
    
            case 2:
            temp=new node;
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
                temp-next=NULL;

            }
            break;
        }

    }while(ch==1||ch==2);

}
int main(){
 return 0;
}