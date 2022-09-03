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

int LargeSmallSum_1(int arr[],int n){
  if(n==0)
  return 0;

  if(n<3)
  return 0;
  

  int maxi_even_1=arr[0];
  int maxi_even_2=arr[2];

  for(int i=4;i<n;i+=2){
    if(arr[i]>maxi_even_2)
    maxi_even_2=arr[i];

    if(maxi_even_1<maxi_even_2){
      int temp=maxi_even_1;
      maxi_even_1=maxi_even_2;
      maxi_even_2=temp;
    }
  }

  int mini_odd_1=arr[1];
  int mini_odd_2=arr[3];

  for(int i=5;i<n;i+=2){
    if(arr[i]<mini_odd_2)
    mini_odd_2=arr[i];

    if(mini_odd_1>mini_odd_2){
      int temp=mini_odd_1;
      mini_odd_1=mini_odd_2;
      mini_odd_2=temp;
    }

  }
  
  return mini_odd_2+maxi_even_2;



}
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<LargeSmallSum_1(arr,n);
    return 0;
}