#include<bits/stdc++.h>
using namespace std;
vector<int>sieveOfEratosthenes(int n){
    bool prime[n+1];
    vector<int>v;
    memset(prime,true,sizeof(prime));
    for(int i=2;i*i<=n;i++){
        if(prime[i]==true){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=false;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i])
        v.push_back(i);
    }
    return v;
}
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    vector<int>res=sieveOfEratosthenes(n);
    for(int i=0;i<res.size();i++)
    cout<<res[i]<<" ";
    return 0;
}