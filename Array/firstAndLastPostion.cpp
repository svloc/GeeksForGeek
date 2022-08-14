
#include<bits/stdc++.h>
using namespace std;
int firtsOcc(int arr[],int n, int num){
    int s=0,e=n-1;
     int mid;
     int ans=-1;
     while(s<=e){
        mid=s+(e-s)/2;
        if(arr[mid]==num){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]<num){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
     }
     return ans;
}

int SecondOcc(int arr[],int n,int num){
    int s=0,e=n-1;
    int mid;
    int ans=-1;
    while(s<=e){
      mid=s+(e-s)/2;
      if(arr[mid]==num){
        ans=mid;
        s=mid+1;
      }
      else if(arr[mid]<num){
        s=mid+1;
      }
      else{
        e=mid-1;
      }
    }
    return ans;
}

pair<int,int> FirstandLastpos(int arr[],int n,int num){
   pair<int,int>p;
   p.first=firtsOcc(arr,n,num);
   p.second=SecondOcc(arr, n, num);
   return p;  
}


int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    int num;
    cout<<"Enter Num: ";
    cin>>num;

    pair<int,int>p=FirstandLastpos(arr,n,num);
    cout<<p.first<<" "<<p.second;
   return 0;
}