#include<bits/stdc++.h>
using namespace std;

int minDiff(int arr[],int n,int k){
   int mn_diff=INT_MAX;
   sort(arr,arr+n);
   for(int i=0;i+k-1<n;i++){
    mn_diff=min(arr[i+k-1]-arr[i],mn_diff);
   }
  return mn_diff;
}

int main(){
  int n;
  cout<<"Enter N: ";
  cin>>n;
  int arr[n];

  cout<<"Enter N Values: ";

  for(int i=0;i<n;i++)
      cin>>arr[i];
 int k;
 cout<<"Enter K: ";
 cin>>k;
 cout<<minDiff(arr,n,k);

}