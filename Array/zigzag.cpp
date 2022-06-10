#include<bits/stdc++.h>
using namespace std;
void zigZag(int arr[],int n){
  for(int i=1;i<n;i++){
    if(i%2==0){
        if(arr[i-1]<arr[i])
         swap(arr[i-1],arr[i]);
    }
    else{
        if(arr[i-1]>arr[i])
        swap(arr[i-1],arr[i]);
    }
  }
}
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array element: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    zigZag(arr,n);
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
    
    return 0;
}