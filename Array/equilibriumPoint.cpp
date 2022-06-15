#include<bits/stdc++.h>
using namespace std;

int equilibriumPoint(int arr[],int n){
 int i=0,j=n-1;
 int s=arr[0],s1=arr[n-1];

 if(n==1) return 1;
 if(n==2) return -1;
 while(i+1!=j-1){
  if(s<s1) s+=arr[++i];
  else s1+=arr[--j];
 }
 if(s==s1) return i+2;
 else return -1;
}

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    cout<<"Enter N elements: ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"equilibrium point is: "<<equilibriumPoint(arr,n);
    return 0;
}