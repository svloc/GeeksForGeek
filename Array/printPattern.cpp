#include<iostream>
using namespace std;

int main(){
    int n,num;
    cout<<"Enter N :";
    cin>>n;
    
    for(int j=n;j>0;j--){
     num=n;
     for(int i=0;i<j*n;i++){
         if(i%j==0 && i>0){
            num--;
         }
         cout<<num<<" ";
     }
       cout<<"$";
    }
  

    return 0;
}