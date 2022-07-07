#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n==1)
    return false;
    
    for(int i=2;i<n;i++){
        if(n%i==0)
        return false;
    }
    return true;
}

int largestPrimeFactor(int n){
  if(isPrime(n))
  return n;
  int mx=INT_MIN;
  for(int i=2;i<=n;i++){
    if(n%i==0 and isPrime(i))
    mx=max(i,mx);
  }
  return mx;
}
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    cout<<"Result: "<<largestPrimeFactor(n);
    return 0;
}