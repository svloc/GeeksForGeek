#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int a;
    int b;
    for(int i=1;i<=n;i++){
        a=1;
        b=n-i+1;
        for(int j=n;j>=i;j--){
            cout<<a<<" ";
            a++;
        }
        for(int j=n-i+1;j<n;j++){
            cout<<"*"<<" ";
        }
        for(int j=n-i+1;j<n;j++){
            cout<<"*"<<" ";
        }
       for(int j=n;j>=i;j--){
            cout<<b<<" ";
            b--;
        }
        
     cout<<endl;
    }
    return 0;
}