#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int CountPairsWithGivenSum(int arr[],int n,int k){
int result=0;
unordered_map<int,int> m;
for (int i = 0; i <n; i++)
{
    if(m[k-arr[i]]){
        result+=m[k-arr[i]];
    }
    m[arr[i]]++;
}
return result;
} 
int main(){
    int n,s;
    cout<<"Enter N: ";
    cin>>n;
    cout<<"Enter Sum: ";
    cin>>s;
    int arr[n];
    cout<<"Enter N Values: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a=CountPairsWithGivenSum(arr,n,s);
    cout<<a<<" ";
return 0;
}