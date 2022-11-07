#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
};

class DL{
    public:
    void Insert();
    void Display();
    int getLen();
    Node* head;
    DL(){
        head=NULL;
    }

};

void DL::Insert(){
    int ch1;
    do{
        int val;
        cout<<"\nEnter Data: ";
        cin>>val;
        int ch;
        cout<<"Insert At\n1]At start\n2]At Position\n3]At End: "<<endl;
        cin>>ch;
        Node* temp=new Node;
        temp->data=val;
        temp->next=NULL;
        temp->prev=NULL;
        switch (ch)
        {
        case 1:{
            if(head==NULL){
                head=temp;
            }
            else{
               temp->next=head;
               head->prev=temp;
               head=temp;
            }
        }
            break;
        case 2:{
            int pos;
            cout<<"Enter Position: ";
            cin>>pos;
            int cmt=1;
            Node* sp=head; 
            while(cmt<pos-1){
                sp=sp->next;
                cmt++;
            }
            temp->next=sp->next;
            temp->prev=sp;
            sp->next->prev=temp;
            sp->next=temp;
            temp->prev=sp;
            break;
        }
        case 3:{
            if(head==NULL){
            head=temp;
            }
            else{
            Node* sp1=head;
            while(sp1->next!=NULL){
                sp1=sp1->next;
            }
            sp1->next=temp;
            temp->prev=sp1;
            }
            break;    
        }
        }
        cout<<"\nContinue: 1 or 0: ";
        cin>>ch1;
    }while(ch1==1);


}
void DL::Display(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}
int DL::getLen(){
    Node* temp=head;
    int c=0;
    while(temp!=NULL){
        c++;
        temp=temp->next;
    }
    return c;
}
int main(){
    DL obj;
    obj.Insert();
    obj.Display();
    cout<<"\nlength of DL: "<<obj.getLen();
    return 0;
}