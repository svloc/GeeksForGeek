#include<bits/stdc++.h>
using namespace std;
int EquilibriumIndex(int arr[],int n){
 int sum=0;
 int leftsum=0;
 for(int i=0;i<n;i++)
 sum+=arr[i];

 for(int i=0;i<n;i++){
    sum-=arr[i];
    if(sum==leftsum)
    return i;
    leftsum+=arr[i];
 }
 return -1;
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
    cout<<"Result: "<<EquilibriumIndex(arr,n);
    return 0;
}