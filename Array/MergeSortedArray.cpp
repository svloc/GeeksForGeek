#include<bits/stdc++.h>
using namespace std;
vector<int> MergeSortedArray(int arr[],int n,int arr1[],int m){
  int i=0,j=0;
  vector<int>v;

  while(i<n && j<m){
    if(arr[i]<arr1[j]){
      v.push_back(arr[i]);
      i++;
    }
    else{
        v.push_back(arr1[j]);
        j++;
    }
    while(i<n){
        v.push_back(arr[i]);
        i++;
    }
    while(j<m){
        v.push_back(arr1[j]);
        j++;
    }
    
  }
  return v;
}
int main(){
    int n,m;
    cout<<"Enter N & M: ";
    cin>>n>>m;
    int arr[n], arr1[m];
    cout<<"Enter Ele: ";

    for(int i=0;i<n;i++)
    cin>>arr[i];

    cout<<"Enter Ele: ";
    for(int j=0;j<m;j++)
    cin>>arr1[j];

    vector<int>v=MergeSortedArray(arr,n,arr1,m);
    int size=v.size();
    for(int i=0;i<size;i++)
    cout<<v[i]<<" ";

 return 0;
}