#include<bits/stdc++.h>
using namespace std;

bool  findUniqueOcc(int arr[],int n){
   sort(arr,arr+n);
   int c=1;
   int i=0;
   vector<int>v;
   while(i<n-1){
    if(arr[i]==arr[i+1])
    {
        c++;
        i++;
    }
    else{
        v.push_back(c);
        c=1;
        i++;
    }
    }
    v.push_back(c);
    
    sort(v.begin(),v.end());
     i=0;
     int m=v.size();
     while(i<m-1){
        if(v[i]==v[i+1]){
            return false;
        }
        i++;
     }
return true;
}

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    if(findUniqueOcc(arr,n))
    cout<<"Yes";
    else
    cout<<"No";

    return 0;
}