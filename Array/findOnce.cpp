#include<bits/stdc++.h>
using namespace std;
int findOnce(int arr[],int n){
 
 for(int i=0;i<n;i+=2){
  if(arr[i]!=arr[i+1])
      return arr[i];
  
 }
}
int findonce_1(int arr[],int n){
long long int ans=0;
for(int i=0;i<n;i++){
    ans^=arr[i];
}
return ans;
}

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int arr[n];
    cout<<"Enter element: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Unique Element: "<<findonce_1(arr,n);

    return 0;
}