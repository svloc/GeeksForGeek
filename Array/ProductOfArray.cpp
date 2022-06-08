#include<bits/stdc++.h>
using namespace std;
long long int productArray(int arr[],int n,int mod){
    long long int p=1;
for(int i=0;i<n;i++){
    p*=arr[i];
}
return p%mod;
}
int main(){
long long int n;
cout<<"Enter N: ";
cin>>n;
int arr[n];
cout<<"Enter N Element: ";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
long long int mod=1000000007;

cout<<"Result : "<<productArray(arr,n,mod);
return 0;
}