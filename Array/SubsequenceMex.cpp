#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int SubsequenceMex(int n,vector<int>&arr){
  unordered_map<int,int>mp;
  for(int i=0;i<n;i++){
      mp[arr[i]]++;
  }
  int ans=n;
  for (int i = 0; i < n; i++)
  {
   if(mp.find(i)!=mp.end())
     continue;
   else
     ans=i;
     break;  
  }
  return ans;
}
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter N values:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int res=SubsequenceMex(n,arr);
    cout<<"Result: "<<res;

 return 0;   
}