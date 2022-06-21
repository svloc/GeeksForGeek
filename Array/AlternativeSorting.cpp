#include<bits/stdc++.h>
using namespace std;
vector<int> AlternativeSorting(int arr[],int n){
  vector<int>v;
  int left=0,right=n-1,mid=n/2;
  sort(arr,arr+n);
  while(left<right){
    v.push_back(arr[right]);
    v.push_back(arr[left]);
    right--;
    left++;
 }
 if(n%2!=0)
 v.push_back(arr[mid]);

 return v;
}
int main(){
 int n;
 cout<<"Enter N: ";
 cin>>n;
 int arr[n];
 cout<<"Enter N values: ";
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }  
 vector<int>v=AlternativeSorting(arr,n);
 for(int i:v) cout<<i<<" ";

    return 0;
}