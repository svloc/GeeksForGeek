#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int sp;
    for(int i=n;i>0;i--){
        sp=n-i;
        for(int j=1;j<=sp;j++){
            cout<<" "<<" ";
        }

        for(int j=sp+1;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}