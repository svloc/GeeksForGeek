#include<bits/stdc++.h>
using namespace std;

int main(){
    int testCase;
    cin>>testCase;
    
    for(int t=0;t<testCase;t++){

       int n;
       cin>>n;

       int arr[n];

       for(int i=0;i<n;i++){
        cin>>arr[i];
       }

       int c;
       vector<int>v;

       for(int i=0;i<n;i++){
           c=0;
          if(arr[i]==1){
            
           for(int j=i+1;j<n;j++){
            if(arr[j]==0)
            c++;
           }
           break;
          }

       }
       cout<<c<<endl;
}
}