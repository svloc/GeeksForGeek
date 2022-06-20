
#include<bits/stdc++.h>
using namespace std;
int maxSum(int arr[],int n,int k){

    int mxSum=INT_MIN;
    
    for(int i=0;i<n-k+1;i++){
     int currSum=0;
     for(int j=0;j<k;j++)
        currSum+=arr[i+j];
     mxSum=max(currSum,mxSum);
    }
    return mxSum;
}

int maxSum_1(int arr[],int n,int k){
 if(n<k)
 return -1;

 int mxSum=0;

 for(int i=0;i<k;i++)
 mxSum+=arr[i];

 int winSum=mxSum;
 for(int i=k;i<n;i++){
  winSum+=arr[i]-arr[i-k];

  mxSum=max(mxSum,winSum);
 }
 return mxSum;
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
  cout<<maxSum_1(arr,n,k);    
}
