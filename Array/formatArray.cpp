#include<bits/stdc++.h>
using namespace std;
void formatArray(int arr[], int n){
  for(int i=0;i<n;i++){
    if(i%2==0 && arr[i]<arr[i+1])
    continue;
    else if(i%2!=0 && arr[i]>arr[i+1])
    continue;
    else
    swap(arr[i],arr[i+1]);
  }

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
 
 formatArray(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
 }
 return 0;
}