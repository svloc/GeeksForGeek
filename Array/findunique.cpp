#include<bits/stdc++.h>
using namespace std;
int findUnique(int arr[],int n,int k){        
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    if(k>=2){
    for(auto i:mp){
        if((i.second)%k!=0)
        return i.first;
    }
    }
    else{
        return 0;
    }
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n];
    
    int k;
    cout<<"Enter K: ";
    cin>>k;
    cout<<"Enter N element: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<findUnique(arr,n,k);
    return 0;
}