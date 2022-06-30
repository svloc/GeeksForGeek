#include<bits/stdc++.h>
using namespace std;
void ShuffleIntegers(int arr[],int n){
    int i=0,j=n/2;
    vector<int>v;
    while(j<n){
        v.push_back(arr[i++]);
        v.push_back(arr[j++]);
    }
    for(i=0;i<n;i++)
    arr[i]=v[i];

}
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int arr[n];
    cout<<"Enter N elements: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    ShuffleIntegers(arr,n);
    cout<<"Result: ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}