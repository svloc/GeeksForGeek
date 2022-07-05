#include<bits/stdc++.h>
using namespace std;
void printPattern(int n){
  int num;
  for(int j=n;j>0;j--){
    num=n;
    for(int i=0;i<j*n;i++){
       if(i%j==0 && i>0)
       num--;
       cout<<num<<" ";
    }
    cout<<"\n";
  }
}
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    printPattern(n);
    return 0;
}