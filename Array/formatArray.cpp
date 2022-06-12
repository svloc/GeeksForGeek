#include<bits/stdc++.h>
using namespace std;
int formatArray(int arr[], int n){
  for(int i=0;i<n;i++){
    if(i%2==0 && arr[i]<arr[i+1])
    continue;
    else if(i%2!=0 && arr[i]>arr[i+1])
    continue;
    else
    swap(arr[i],arr[i+1]);
  }
  return arr;
}

int main(){
 int n;
 cout<<"Enter N: ";
 cin>>n;
 int arr[n];
 cout<<"Enter N values: ";
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }  
 
 cout<<"Result: "<<formatArray(arr,n);

 return 0;
}