#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cout<<"Enter N: ";
    cin>>n;
    cout<<"Enter K: ";
    cin>>k;

    int arr[n];
    cout<<"Enter N element: ";
    for(int i=0;i<n;i++){
    cin>>arr[i];}
    
    for(int i=0;i<n;i++){
        cout<<arr[(i+k)%n]<<" ";
    }
    return 0;
}