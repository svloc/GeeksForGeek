#include<bits/stdc++.h>
using namespace std;
int largestAndSecond(int arr[],int n){
 int x=-1;
 int y=-1;
 sort(arr,arr+n);
  if(n>=2){
    x=arr[0];
    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
        y=arr[i+1];
        break;
        }
    }
  }
  if(y==-1) return {y};
//  else 
//  return {x,y};

}

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int arr[n];
    cout<<"Enter N elements: ";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Result: "<<largestAndSecond(arr,n);
    return 0;
}