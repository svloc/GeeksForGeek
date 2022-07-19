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
    cout<<k<<" Found--"<<endl;
    else
    cout<<"Not Found..";

    reverse(arr,arr+n);
    cout<<"Reverse Array: ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;

    cout<<"Max: "<<*max_element(arr,arr+n);
    cout<<"\nMin: "<<*min_element(arr,arr+n);
    cout<<"\nSum: "<<accumulate(arr,arr+n,0);

    return 0;
}