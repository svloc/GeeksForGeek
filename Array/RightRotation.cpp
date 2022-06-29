#include<bits/stdc++.h>
using namespace std;
void Re_1(int arr[],int low, int high){
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
void RightRotation(int arr[],int n, int k){
 k=k%n;
 Re_1(arr,n-k,n-1);
 Re_1(arr,0,n-k-1);
 Re_1(arr,0,n-1);
}

int main(){
    int t;
    cout<<"Enter Test Case: ";
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cout<<"Enter N: ";
        cin>>n;
        int arr[n];
        cout<<"Enter N element: ";
        for(int i=0;i<n;i++)
        cin>>arr[i];
        int k;
        cout<<"Enter K:";
        cin>>k;
        RightRotation(arr,n,k);
        for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    }
}