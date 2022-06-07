#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;

vector<int>findDuplicates(int arr[],int n){
    vector<int>v;
    unordered_map<int,int>mp;
    sort(arr,arr+n);
    
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
        if(mp[arr[i]]==2){
            v.push_back(arr[i]);
        }
    }
    if(v.empty()){
        v.push_back(-1);
    }

    return v;

}

int main(){
    int n;
    cout<<"Enter N:";
    cin>>n;
    int arr[n];
    cout<<"Enter N Values: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    vector<int>res=findDuplicates(arr,n);
    for(int i:res) cout<<i<<' ';
    cout<<endl;
    return 0;
}