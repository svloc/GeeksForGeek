#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter N:";
    cin>>n;
    char ch;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            ch='A'+j-1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}