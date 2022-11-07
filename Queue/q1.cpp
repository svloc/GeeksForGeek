#include<bits/stdc++.h>
using namespace std;
class Q{
  public:
  int size;
  int front,rear;
  int *arr;
  bool isEmpty();
  bool isFull();
  void Enqueue(int);
  int Dequeue();
  void Display();

  Q(int size){
    this->size=size;
    arr= new int[size];
    front=rear=0;
  }
  
};

bool Q::isEmpty(){
    if(front==rear)
    return true;

    if(front>rear)
    return true;

    return false;
}

bool Q::isFull(){
    if(rear==this->size)
    return true;
    return false;
}

void Q::Enqueue(int val){
    arr[rear++]=val;
}

int Q::Dequeue(){
  int ans=arr[front];
  arr[front]=-1;
  front++;
  if(front==rear){
    front=0;
    rear=0;
  }
  return ans;
}

void Q:: Display(){
  for(int i=front;i<rear;i++)
  cout<<arr[i]<<" ";
  cout<<endl;
}


int main(){
    int n;
    cout<<"Enter Size of Q: ";
    cin>>n;
    Q obj(n);
    int ch;
    do{
    cout<<"\nEnter Your Choice: ";
    cout<<"\n1]Enqueue\n2]Dequeue\n3]Display\n4]Exit\n ";
    cin>>ch;
    switch (ch)
    {
    case 1:{
        if(obj.isFull()){
            cout<<"Queue is FULL-->"<<endl;
        }
        else{
            int val;
            cout<<"Enter Value: ";
            cin>>val;
            obj.Enqueue(val);
            cout<<"Value add Successfully-->"<<endl;
        }
        break;
    }

    case 2:{
        if(obj.isEmpty())
        cout<<"Queue is empty-->"<<endl;
        else{
            obj.Dequeue();
            cout<<"Value deleted Successfully-->"<<endl;
        }
        break;
    }

    case 3:{
        if(obj.isEmpty())
        cout<<"Queue is empty-->"<<endl;
        else
        obj.Display();
        break;
    }
    case 4:
       break;
    default:
        break;
    }
    }while(ch!=4);


    return 0;
}