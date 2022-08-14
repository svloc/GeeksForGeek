#include<bits/stdc++.h>
using namespace std;
int RatCountHouse(int r,int unit,int n,int arr[]){
    if(n==0)
    return -1;

    int s=arr[0];
    int total=r*unit;

    for(int i=1;i<n-1;i++){
      if(s<total)
      s+=arr[i];
      else
      return i;
    }
    if(s<total)
    return 0;
}
int main(){
    int n,r,unit;
    cout<<"Enter Rat: ";
    cin>>r;
    cout<<"Enter Unit: ";
    cin>>unit;
    cout<<"Enter N:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<RatCountHouse(r,unit,n,arr);
    return 0;

}