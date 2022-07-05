#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,M;
    cout<<"Enter N & M: ";
    cin>>N>>M;
    int q=N/M,n1=M*q,n2=M*(q+1);
    if(N*M<0)
    n2=M*(q-1);
    if(abs(N-n2)>abs(N-n1))
    cout<<n1;
    else
    cout<<n2;
    return 0;
}