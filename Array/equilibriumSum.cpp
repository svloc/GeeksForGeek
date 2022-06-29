#include<bits/stdc++.h>
using namespace std;

string EqualSum(int arr[],int n){
 int i=0,j=n-1;
 string str="NO";
 int s=arr[0],s1=arr[n-1];
 while(i<j){
    if(s<s1)
    s+=arr[++i];
    else
    s1+=arr[--j];
 }
 if(s==s1)
 str="YES";
 return str;
}


int main(){
    int t;
    cout<<"Enter test Case: ";
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cout<<"Enter N: ";
        cin>>n;
        cout<<"Enter N element : ";
        int arr[n];

        for(int i=0;i<n;i++)
        cin>>arr[i];
       
       cout<<"Result: "<<EqualSum(arr,n);

    }
}
