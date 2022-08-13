#include<bits/stdc++.h>
using namespace std;

void Sort01(int arr[],int n){
    int i=0,j=n-1;
    while(i<j){
        if(arr[i]==0)
            i++;
        if(arr[j]==1)
        j--;
        if(arr[i]!=0 & arr[j]!=1){
            swap(arr[i],arr[j]);
        }

    }
}
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Arr element: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];

    Sort01(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}