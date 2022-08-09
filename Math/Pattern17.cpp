#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter N:";
    cin>>n;
    int num=1;
    int sp;
    for(int i=n;i>0;i--){
        sp=n-i;
     for(int j=0;j<sp;j++){
        cout<<" ";
     }
     for(int j=1;j<=i;j++){
        cout<<num;
     }
     num++;
     cout<<endl;
    }
    return 0;
}