#include<bits/stdc++.h>
using namespace std;
int peakElement(int arr[],int n){
  int mx=0,index=0;
  for(int i=0;i<n;i++){
    if(arr[i]>mx){
        mx=arr[i];
        index=i;
    }
  }
  return index;
}

int PeakEle(int arr[],int n){
  int s=0,e=n-1;
  int mid;
  while(s<e){
    mid=s+(e-s)/2;
    if(arr[mid]<arr[mid+1]){
        s=mid+1;
    }
    else{
        e=mid;
    }
  }
  return s;
}

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int arr[n];
    cout<<"Enter N element: ";
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Peak Element Index : "<<peakElement(arr,n);
    return 0;

}