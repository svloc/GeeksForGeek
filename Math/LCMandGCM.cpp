#include<bits/stdc++.h>
using namespace std;
vector<long long>LCMandGCD(long long A,long long B){
    long long a=max(A,B);
    long long b=min(A,B);
    long long rem;
    vector<long long>v;
    while(b!=0){
        rem=a%b;
        a=b;
        b=rem;
    }
    long long c=A*B/a;
    v.push_back(c);
    v.push_back(a);
    return v;
}
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    cout<<"Enter M: ";
    int m;
    cin>>m;
    cout<<"Lcm and GCD: ";
    vector<long long>res=LCMandGCD(n,m);
    for(auto i:res) cout<<i<<" ";
    return 0;
}