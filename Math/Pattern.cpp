#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int c;
    for(int i=1;i<=n;i++){
        c=i;
        for(int j=1;j<=i;j++){
            cout<<c<<" ";
            c--;
        }
        cout<<endl;
    }
    return 0;
}