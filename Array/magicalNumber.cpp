#include<bits/stdc++.h>
using  namespace std;

int magicalNumber(int arr[],int n){
 int mid,left=0,right=n-1;
 while(left<=right){
    mid=n/2;
    if(arr[mid]==mid){
        return mid;
    }
    else if(arr[mid]<mid){
        left=mid-1;
    }
    else{
        right=mid+1;
    }
 }
 return -1;
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
    
    cout<<"Result: "<<magicalNumber(arr,n);

    return 0;
 }