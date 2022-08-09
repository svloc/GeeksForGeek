#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int sp;
    for(int i=1;i<=n;i++){
        sp=n-i;

        for(int j=0;j<sp;j++){
            cout<<" "<<" ";
        }

        for(int j=sp;j<n;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}