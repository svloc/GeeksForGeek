#include<bits/stdc++.h>
using namespace std;
void ImmediateSmallerElement(int arr[], int n){
 
 for(int i=0;i<n;i++){
    if(arr[i]>arr[i+1]){
        arr[i]=arr[i+1];
    }
    else{
        arr[i]=-1;
    }
 }
 arr[n-1]=-1;
}

int main(){
 int n;
 cout<<"Enter N: ";
 cin>>n;
 int arr[n];
 cout<<"Enter N Element: ";
 for(int i=0;i<n;i++){
  cin>>arr[i];
 }
 ImmediateSmallerElement(arr,n);
 for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
 }

}