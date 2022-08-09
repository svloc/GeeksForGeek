#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter N :";
    cin>>n;
    int sp;
    for(int i=n;i>=0;i--){
        sp=n-i;
        for(int j=sp;j>0;j--){
          cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        
        cout<<endl;
    }
    return 0;
}