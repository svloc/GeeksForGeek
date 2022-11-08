#include<bits/stdc++.h>
using namespace std;

void print_queue(queue<int>q){
  queue<int>temp=q;
  while(!temp.empty()){
    cout<<temp.front()<<" ";
    temp.pop();
  }
  cout<<endl;
}
int main(){
    queue<int>q;
    for(int i=0;i<=20;i+=2)
    q.push(i);

    print_queue(q);
    q.pop();
    print_queue(q);
    return 0;

}