#include<bits/stdc++.h>
using namespace std;

class ST{
  public:
  int size,top;
  int *arr;

  void push(int);
  int pop();
  int peep();
  void display();
  bool isEmpty();
  bool isFull();
  void d(){
    cout<<"Size-->"<<this->size<<endl;
  }
  
  ST(int size){
    this->size=size;
    arr=new int[size];
    top=-1;
  }
};

void ST::push(int val){
   arr[++top]=val;
}

int ST::pop(){
    return arr[top--];
}

int ST::peep(){
    return arr[top];
}

bool ST::isEmpty(){
    if(top==-1)
    return true;
    return false; 
}

bool ST::isFull(){
    if(top==this->size-1)
    return true;
    return false;
}

void ST::display(){
    for(int i=0;i<=top;i++){
        cout<<arr[i]<<"--> ";
    }
    cout<<endl;
}

int main(){
    int size;
    cout<<"Enter Size of stack: ";
    cin>>size;
    ST obj1(size);

    int ch;
    do{
    cout<<"\n1]Push\n2]Pop\n3]Peep\n4]Display\n5]Exit";
    cout<<"\nEnter Choice: ";
    cin>>ch;
    switch (ch)
    {
    case 1:
        obj1.d();
        
        if(obj1.isFull())
         cout<<"Stack is Full---"<<endl;
        else{
         int val;
         cout<<"Enter value: ";
         cin>>val;   
         obj1.push(val); 
         cout<<"Value added Sucessfully.."<<endl;
        }
        cout<<"top==>"<<obj1.top<<endl;
        break;
    case 2:
        
        if(obj1.isEmpty())
        cout<<"Stack is Empty---"<<endl;
        else{
        obj1.pop();
        cout<<"Pop Sucessfully-.."<<endl;;
        }
        break;    
    case 3:
        if(obj1.isEmpty())
        cout<<"Stack is empty..."<<endl;
        cout<<obj1.peep()<<endl;
        break; 
    case 4:
        if(obj1.isEmpty())
        cout<<"Stack is Empty..."<<endl;
        else
        obj1.display();
        break; 
    case 5:
       break;
    default:
        break;
    }
    }while(ch!=5);
    
    return 0;
}