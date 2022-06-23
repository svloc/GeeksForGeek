#include<bits/stdc++.h>
using namespace std;
void TwoNDiff(int arr[],int n,int d){
    int i=0,j=1;
    while(i<n && j<n){
     if(i!=j && (arr[j]-arr[i]==2*d || arr[i]-arr[j]==2*d))
     {
        cout<<"Pair: "<<arr[i]<<","<<arr[j];
        break;
     }
     else if(arr[j]-arr[i]<n)
     j++;
     else
     i++;
    }
}
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int arr[n];
    cout<<"Enter N Values:";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int d;
    cout<<"Enter D: ";
    cin>>d;    
    TwoNDiff(arr,n,d);
    return 0;
}