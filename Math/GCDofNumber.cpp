#include<bits/stdc++.h>
using namespace std;
int GCDofNum(int n,int m){
    int r;
    while(m!=0){
      r=n%m;
      n=m;
      m=r;
    }
    return n;
}
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int m;
    cout<<"Enter M: ";
    cin>>m;
    cout<<GCDofNum(n,m);
    return 0;
}