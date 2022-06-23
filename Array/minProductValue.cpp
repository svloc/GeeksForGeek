#include<bits/stdc++.h>
using namespace std;
int minProduct(int arr[],int arr1[],int n,int m){
    sort(arr,arr+n);
    sort(arr1,arr1+m);
    int res=0;
    for(int i=0;i<n;i++){
      res+=arr[i]*arr1[n-i-1];
    }
    return res;
}
using namespace std;
int main(){
    int n,m;
    cout<<"Enter N & M : ";
    cin>>n>>m;
    int arr[n],arr1[m];

    cout<<"Enter N Ele: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Enter M ele: ";
    for(int i=0;i<n;i++)
    cin>>arr1[i];
    cout<<"Result: "<<minProduct(arr,arr1,n,m);
    return 0;
}