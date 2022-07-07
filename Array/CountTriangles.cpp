#include<bits/stdc++.h>
using namespace std;
int CountTriangles(int arr[],int n){
    int count=0;
    int l,r;
    for(int i=n-1;i>0;i--){
       l=0;
       r=i-1;
       while(l<r){
        if(arr[l]+arr[r]>arr[i]){
          count+=r-l;
          r--;
        }
        else
        l++;
       }
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int arr[n];
    cout<<"Enter N element: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Result: "<<CountTriangles(arr,n);
    return 0;
}