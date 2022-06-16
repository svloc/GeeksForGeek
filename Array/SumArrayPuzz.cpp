#include<bits/stdc++.h>
using namespace std;
void SumArrayPuzzle(int arr[], int n){
 long long int sum=0;
 for(int i=0;i<n;i++){
    sum+=arr[i];
 }
 for(int i=0;i<n;i++){
    arr[i]=sum-arr[i];
 }
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
    SumArrayPuzzle(arr,n);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}