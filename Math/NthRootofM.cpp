#include<bits/stdc++.h>
using namespace std;
int nthRootofM(int n,int m){
    long int a=0;
    long int ele=0;
    while(ele<=m){
        ele=pow(a,n);
        if(ele==m)
        return a;
       a++;
    }
}
int main(){
    int n,m;
    cout<<"Enter N and M: ";
    cin>>n>>m;
    cout<<"Result: "<<nthRootofM(n,m);
    return 0;
}