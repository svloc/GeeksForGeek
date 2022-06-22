#include<bits/stdc++.h>
using namespace std;

int countSubsequences(string str){
  int mod=1000000007,a=0,b=0,c=0;
  for(int i=0;i<str.length();i++){
    if(str[i]=='a')
    a=(2*a+1)%mod;

    else if(str[i]=='b')
    b=(2*b+a)%mod;

    else
    c=(2*c+b)%mod;

  }
  return c;
}
int main(){
    string str;
    cout<<"Enter String: ";
    cin>>str;
    cout<<"Result: "<<countSubsequences(str);
    return 0;
}