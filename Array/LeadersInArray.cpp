#include<bits/stdc++.h>
using namespace std;

int leader(int arr[],int n){
 int a[n];
 int mx=0;
 for(int i=0;i<n;i++){
    if(arr[i]>mx){
        mx=arr[i];
        a[i]=arr[i];
    }
 }
 reverse(a,a+n);
 return a;
}
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    cout<<"Enter N Values: ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Leaders are : "<<leader(arr,n);
    return 0;
}