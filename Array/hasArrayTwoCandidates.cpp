#include<bits/stdc++.h>
using namespace std;
bool hasArrayTwoCandidates(int arr[],int n,int x){
   unordered_map<int,int>mp;
   for(int i=0;i<n;i++){
    if(mp[x-arr[i]])
    return true;
    mp[arr[i]]++;
   }
   return false;
}

bool hasArrayTwoCandidates_1(int arr[],int n,int x){
  int i=0,j=n-1;
  sort(arr,arr+n);
  while(i<j){
    if(arr[i]+arr[j]==x)
    return true;
    else if(arr[i]+arr[j]<x)
    i++;
    else
    j--;
  }
  return false;
}

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int x;
    cout<<"Enter X: ";
    cin>>x;
    cout<<"Enter N element: ";
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    if(hasArrayTwoCandidates_1(arr,n,x))
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}