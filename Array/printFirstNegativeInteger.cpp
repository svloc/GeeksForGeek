#include<bits/stdc++.h>
using namespace std;
vector<int>printFirstNegativeInteger(int arr[],int n,int k){
    vector<int>v;
   for(int i=0;i<n;i++){
    for(int j=0;j<=k;j++){
        if(arr[j]<0)
        {
          v.push_back(arr[j]);
        }
    }
   }
   return v;
}
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter K: ";
    cin>>k;
    vector<int>ans=printFirstNegativeInteger(arr,n,k);
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";

    return 0;
}