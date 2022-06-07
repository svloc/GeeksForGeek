#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>&array,int n){
int res=(n*(n+1))/2;

for(int i=0;i<n-1;i++){
    res-=array[i];
}
return res;
}
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    vector<int>array(n);
    cout<<"Enter N-1 Values: ";

    for(int i=0;i<n-1;i++){
     cin>>array[i];
    }
    int a=missingNumber(array,n);
    cout<<"Missing Value :"<<a;
return 0;
}