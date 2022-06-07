#include<bits/stdc++.h>
using namespace std;

int minDist(int arr[],int n, int x, int y){
int p=-1,max_d=INT_MAX;
 
 for(int i=0;i<n;i++){
     if(arr[i]==x || arr[i]==y){
         if(arr[i]!=arr[p] && p!=-1){
             max_d=min(max_d,i-p);
         }
         p=i;
     }
 }
 if(max_d==INT_MAX){
     return -1;
 }
 return max_d;
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
int x,y;
cout<<"Enter X and Y: ";
cin>>x>>y;

cout<<minDist(arr,n,x,y);
return 0;
}