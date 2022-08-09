#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter N:";
    cin>>n;
    char ch;
    // for(int i=0;i<n;i++){
    //     ch='A'+i;
    //     for(int j=0;j<=i;j++){
    //      cout<<ch<<" ";
    //      ch++;
    //     }
    //     cout<<"\n";
    // }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
         ch='A'+i+j-2;
         cout<<ch<<" ";
        }
        cout<<"\n";
    }
    return 0;
}