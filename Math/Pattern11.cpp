#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    char ch;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            ch='A'+i;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    
    return 0;

}