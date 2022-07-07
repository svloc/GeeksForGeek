#include<bits/stdc++.h>
using namespace std;
int pairCubeCount(int n){
    int j=round(cbrt(n)),val,cr,c=0;
    if(n==0)
    return 0;

    for(int i=1;i<=j;i++){
        val=n-(i*i*i);
        cr=round(cbrt(val));
        if(cr*cr*cr==val)
        c++;
    }
    return c;
}
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    cout<<"Result: "<<pairCubeCount(n);
    return 0;
}