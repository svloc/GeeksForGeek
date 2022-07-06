#include<bits/stdc++.h>
using namespace std;
int fact(int n){
 if(n==0 || n==1)
 return 1;
 else
 return n*fact(n-1);
}
int nPr(int n,int r){
 return fact(n)/fact(n-r);
}
int main(){
    int n,r;
    cout<<"Enter N and R: ";
    cin>>n>>r;
    cout<<"Result:  "<<nPr(n,r);
    return 0;
}