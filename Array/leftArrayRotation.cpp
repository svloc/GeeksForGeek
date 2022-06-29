#include<bits/stdc++.h>
using namespace std;
void reverse_1(int arr[],int low ,int high){
   while(low<high){
    swap(arr[low],arr[high]);
    low++;
    high--;
   }
}
void leftRotation(int arr[],int n,int k){
  k=k%n;
  reverse_1(arr,0,k-1);
  reverse_1(arr,k,n-1);
  reverse_1(arr,0,n-1);
}

void leftR_1(int arr[],int n,int k){
 k=k%n;
 int a[k];

 for(int i=0;i<k;i++)
    a[i]=arr[i];
 
 for(int i=k;i<n;i++)
    arr[i-k]=arr[i];

 for(int i=0;i<k;i++)
   arr[n+k-i]=a[i];   
}


int main(){
    int n;
    int k;
    cout<<"Enter N :";
    cin>>n;
    int arr[n];
    cout<<"Enter N element: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Enter K: ";
    cin>>k;

    leftRotation(arr,n,k);

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;

}