#include<bits/stdc++.h>
using namespace std;

vector<int> DecimalToBinary(int n){
    int rem;
    vector<int>v;
    while(n!=0){
        rem=n%2;
        v.push_back(rem);
        n=n/2;
    }
    reverse(v.begin(),v.end());
    return v;
}

void DeciToBinary(int n){
    int ans=0;
    int i=0;
    while(n!=0){
       int bt=n&1;
     ans=(bt*pow(10,i))+ans;
      n=n>>1;
      i++;
    }
    cout<<ans<<endl;
}
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    DeciToBinary(n);
    vector<int>v=DecimalToBinary(n);
    int m=v.size();
    for(int i=0;i<m;i++){
        cout<<v[i]<<" ";
    }


    return 0;
}