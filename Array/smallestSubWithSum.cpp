#include<bits/stdc++.h>
using namespace std;
int smallestSubWithSum(int arr[],int n,int x){
    int i=0,j=0;
    int ans=INT_MAX;
    int sum=0;
    while(j<=n){
        if(sum<=x)
        sum+=arr[j++];
        else{
          ans=min(ans,i-j);
          sum-=arr[i++];
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter N: ";
    cin>>n;
    int x;
    cout<<"Enter X: ";
    cin>>x;
    int arr[n];
    cout<<"Enter N Element: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<smallestSubWithSum(arr,n,x);
    return 0;
}