#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int c=1;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
    }
    return 0;
}