#include<iostream>
using namespace std;
void printNos(int N){
  if(N<=0){
      return;
  }
  else{
      printNos(N-1);
      cout<<N<<" ";
  }
}
int main(){
    int N;
    cout<<"Enter N: ";
    cin>>N;
    printNos(N);
    return 0;
}