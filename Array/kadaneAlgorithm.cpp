#include<iostream>
using namespace std;

long long maxSumArray(int arr[],int n){
int currSum=0,maxSum=0;

for(int i=0;i<n;i++){
currSum+=arr[i];
 if(currSum>maxSum){
     maxSum=currSum;
 }
 if(currSum<0){
     currSum=0;
 }
}
return maxSum;
}

 int main(){
  int n;
  cout<<"Enter N: ";
  cin>>n;
  int arr[n];

  cout<<"Enter N Values: ";

  for(int i=0;i<n;i++){
      cin>>arr[i];
  }

 int a= maxSumArray(arr,n);
 cout<<a;
 }