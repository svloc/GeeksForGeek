#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    int rem,s=0;
    int real=n;
    while(n!=0){
        rem=n%10;
        s=s+rem*rem*rem;
        n=n/10;
    }
    if(s==real)
    cout<<"Armstrong Numbers..";
    else
    cout<<"Not an Armstrong Numbers..";
    return 0;
}