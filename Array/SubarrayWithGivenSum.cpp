#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
class solution{
public:
vector<int> subArraySum(int arr[],int n, long long s){
 int i=0,j=0,sum=0;
 vector<int>v;
 sum+=arr[i++];

 while (i<n && j<n)
 {
     sum=arr[i++];
   if(sum>s){
       sum-=arr[i++];
   }
   else if(sum<s){
       sum+=arr[i++];
   } 
   else{
       v.push_back(j+1);
       v.push_back(i);
       break;
   }

 };
 if(v.size()==0){
     v.push_back(-1);
 }
 return v;
 
}
};

int main(){
solution obj;
int n=5;
int s=12;
int arr[n]={1,2,3,7,5};
vector<int> res=obj.subArraySum(arr,n,s);
for(int i:res) cout<<i<<' ';
cout<<endl;
return 0;
}