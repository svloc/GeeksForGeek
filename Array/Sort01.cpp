#include<bits/stdc++.h>
using namespace std;

void Sort01(int arr[],int n){
    int i=0,j=n-1;
    while(i<j){
        while(arr[i]==0 && i<j)
            i++;
        while(arr[j]==1 && i<j)
        j--;
        while(arr[i]==1 && arr[j]==0){
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