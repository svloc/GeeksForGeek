#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int sp;
    int num=1;
    for(int i=1;i<=n;i++){
       sp=n-i;
       for(int j=1;j<=sp;j++){
        cout<<" "<<" ";
       }

       for(int j=sp;j<n;j++){
        cout<<num<<" ";
        num++;
       }

       cout<<endl;
    }
    return 0;
}