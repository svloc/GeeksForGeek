#include<bits/stdc++.h>
using namespace std;
int gcd_of_num(int a,int b){
    int rem;
    while(a%b!=0){
        rem=a%b;
        a=b;
        b=rem;
    }
    return b;
}

int GCDofArray(int arr[],int n){
  int x=0;
  for(int i=0;i<n;i++){
    x=gcd_of_num(x,arr[i]);
  }
  return x;
}
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int arr[n];
    cout<<"Enter N element: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Result: "<<GCDofArray(arr,n);
    return 0;
}
