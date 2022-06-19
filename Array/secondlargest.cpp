#include<bits/stdc++.h>
using namespace std;
int SecondLargets(int arr[],int n){
  sort(arr,arr+n);
  for(int i=n-1;i>=0;i--){
    if(i>=1){
    if(arr[i]!=arr[i-1]){
        return arr[i-1];
    }
    }
    if(i==0){
        if(arr[i]==arr[i-1])
        return {-1};
        else
        return arr[i];
    }

  }
}
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int arr[n];
    cout<<"Enter N Element: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Result: "<<SecondLargets(arr,n);
    return 0;
}