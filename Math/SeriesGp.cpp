#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,n,r;
    cout<<"Enter a and R: ";
    cin>>a>>r;
    cout<<"enter N: ";
    cin>>n;
    cout<<a*pow(r,n-1);
    return 0;
}