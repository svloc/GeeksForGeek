#include<bits/stdc++.h>
using namespace std;

bool possibleSol(int arr[],int n, int m, int mid){
    int studentCount=1;
    int pageSum=0;

    for(int i=0;i<n;i++){
        if(pageSum+arr[i]<=mid){
            pageSum+=arr[i];
        }
        else{
            studentCount++;
            if(studentCount>m || arr[i]>mid)
            return false;
            pageSum=arr[i];
        }
    }
    return true;
}

int allocateBooks(int arr[],int n,int m){
   int s=0;
   int e=0;

   for(int i=0;i<n;i++)
   e+=arr[i];

   int mid;
   int ans=-1;
   
   while(s<=e){

    mid=s+(e-s)/2;
    
    if(possibleSol(arr,n,m,mid)){
      ans=mid;
      e=mid-1;
    }
    else{
      s=mid+1;
    }

   }
return ans;

}
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int arr[n];
    cout<<"Enter N: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Enter M: ";
    int m;
    cin>>m;
    cout<<allocateBooks(arr,n,m);

    return 0;
}