#include<bits/stdc++.h>
using namespace std;

int maxProduct(int arr[],int n,int k){
   int mxP=INT_MIN;
   for(int i=0;i<n-k+1;i++){
     int currP=1;
     for(int j=0;j<k;j++)
     currP*=arr[i+j];
     mxP=max(currP,mxP);
   } 
   return mxP;
}

int maxProduct_1(int arr[],int n,int k){
    int mxP=1;
    for(int i=0;i<k;i++)
    mxP*=arr[i];

    int winP=mxP;
    for(int i=k;i<n;i++){
        winP*=arr[i]-arr[i-k];
        mxP=max(winP,mxP);
    }
    return mxP;
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
  cout<<maxProduct_1(arr,n,k);    
}
