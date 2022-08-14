#include<bits/stdc++.h>
using namespace std;
int LargeSmallSum(int arr[],int n){
    sort(arr,arr+n);
    int s;
    for(int i=0;i<n-2;i+=2){
      s=arr[i];
    }
    return s+arr[3];

}
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<LargeSmallSum(arr,n);
    return 0;
}