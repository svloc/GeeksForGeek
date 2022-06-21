#include<bits/stdc++.h>
using namespace std;
int MaxRepeatingNum(int arr[],int n,int k){
    int a[k]={0};
    for(int i=0;i<n;i++){
        a[arr[i]]++;
    }
    int mx=-1,j=0;
    for(int i=0;i<k;i++){
        if(a[i]>mx){
            mx=a[i];
            j=i;
        }

    }
    return j;
  
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n];
    cout<<"Enter N element: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter K: ";
    cin>>k;
    
    cout<<MaxRepeatingNum(arr,n,k);

}