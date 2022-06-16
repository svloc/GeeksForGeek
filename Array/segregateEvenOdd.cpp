#include<bits/stdc++.h>
using namespace std;
void segregateEvenOdd(int arr[],int n){
    vector<int>v;
    sort(arr,arr+n);
for(int i=0;i<n;i++){
    if(arr[i]%2==0)
    v.push_back(arr[i]);
}
for(int i=0;i<n;i++){
    if(arr[i]%2!=0)
    v.push_back(arr[i]);
}
for(int i=0;i<n;i++){
    arr[i]=v[i];
}
}
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int arr[n];
    cout<<"Enter N element: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    segregateEvenOdd(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}