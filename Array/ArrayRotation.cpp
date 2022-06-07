#include<bits/stdc++.h>
using namespace std;

void arrayRotate(int arr[],int n){
   int x=arr[n-1];
   for(int i=n-1;i>0;i--){
       arr[i]=arr[i-1];
   }
   arr[0]=x;

}
void arrayRotate_1(int arr[],int n){
  int i=0,j=n-1;
  while(i<j){
   swap(arr[i],arr[j]);
   i++;
  }
}


int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int arr[n];
    cout<<"Enter N Array Element: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    arrayRotate_1(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}