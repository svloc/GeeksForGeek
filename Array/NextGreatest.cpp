#include<bits/stdc++.h>
using namespace std;

void NextGreatest(int arr[],int n){
    int mx=arr[n-1];
    for(int i=n-1;i>=0;i--){
        int temp=mx;
        mx=max(mx,arr[i]);
        arr[i]=temp;
    }
    arr[n-1]=-1;

}

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Element: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    NextGreatest(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}