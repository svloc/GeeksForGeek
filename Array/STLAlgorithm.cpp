#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter N: ";
    cin>>n;
    int arr[n];
    cout<<"Enter N element: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
    int k;
    cout<<"Enter K: ";
    cin>>k;
    if(binary_search(arr,arr+n,k))
    cout<<k<<" Found--"<<distance(arr,k)<<endl;
    else
    cout<<"Not Found..";

    // reverse(arr,arr+n);
    // cout<<"Reverse Array: ";
    // for(int i=0;i<n;i++)
    // cout<<arr[i]<<" ";
    // cout<<endl;

    // cout<<"Max: "<<*max_element(arr,arr+n);
    // cout<<"\nMin: "<<*min_element(arr,arr+n);
    // cout<<"\nSum: "<<accumulate(arr,arr+n,0);
    // cout<<"\nEnter X: ";
    // int x;
    // cin>>x;
    // cout<<"Count: "<<count(arr,arr+n,x);
    // int y;
    // cout<<"Enter Y";
    // cin>>y;
    //cout<<"\nFind: "<<find(arr,arr+n,y);
    // arr.erase();
    // int m=sizeof(arr)/sizeof(arr[0]);
    // for(int i=0;i<m;i++)
    // cout<<arr[i]<<" ";
    return 0;
}