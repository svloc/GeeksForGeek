#include<bits/stdc++.h>
using namespace std;

int ProductSmallestPair(int arr[],int n,int sum){

    if(n<2)
    return -1;
    
    int mn1=INT_MAX;
    int in;

    for(int i=0;i<n;i++){
       if(arr[i]<mn1){
         mn1=arr[i];
        in=i;
       }
    }

    arr[in]=INT_MAX;

    int mn2=arr[0];

    for(int i=1;i<n;i++){
      if(arr[i]<mn2)
      mn2=arr[i];
    }

    if(mn1+mn2<=sum){
        return mn1*mn2;
    }
    else
    {
        return 0;
    }

    return -1;
    
}
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int s;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    cout<<"Enter Sum: ";
    cin>>s;

    cout<<ProductSmallestPair(arr,n,s);

    return 0;
}