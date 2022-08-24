#include<bits/stdc++.h>
using namespace std;
bool isPossible(int arr[],int n,int cow, int mid){
  int cowCount=1;
  int lastPos=arr[0];

  for(int i=1;i<n;i++){
    if(arr[i]-lastPos>=mid){
        cowCount++;
        if(cowCount==cow)
        return true;
        lastPos=arr[i];
    }
  }
  return false;
}

int aggressiveCows(int arr[],int n,int cow){
    sort(arr,arr+n);
    int s=0,e=arr[0];

    for(int i=1;i<n;i++)
    e=max(e,arr[i]);

    int mid,ans=-1;

    while(s<=e){
       mid=s+(e-s)/2;
       if(isPossible(arr,n,cow,mid)){
        ans=mid;
        s=mid+1;
       }
       else
       e=mid-1;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int arr[n];
    cout<<"enter ele: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int cow;
    cout<<"Enter Cow: ";
    cin>>cow;

    cout<<aggressiveCows(arr,n,cow);
    return 0;
}