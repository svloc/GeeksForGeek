#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int arr[n];
    cout<<"Enter N Element: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter array group of size K: ";
    cin>>k;
    
    int a1[k];
    int a2[n-k];
    
    for(int i=k;i>=0;i--){
        a1[i]=arr[i];
    }
    for(int j=n;j>=k;j--){
        a2[j]=arr[j];
    }

}