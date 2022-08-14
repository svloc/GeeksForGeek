#include<bits/stdc++.h>
using namespace std;

bool cmp(vector<int>&a,vector<int>&b){
    if(a[1]<b[1]){
      return 1;
    }

    else if(a[1]==b[1]){
    return a[0]>b[0];
    }

    return 0;
}
int main(){
    int n;
    //cout<<"Enter N: ";
    cin>>n;

    vector<vector<int>>a;

    for(int i=0;i<n;i++){
        int u,v;
        cin>>u>>v;
       
        vector<int>temp={1,u};
        a.push_back(temp);
        temp={2,v};
        a.push_back(temp);
    }


   sort(a.begin(),a.end(),cmp);
   
   
   int ans=0;
   
   int cur=0;

   for(int i=0;i<n;i++){
     if(a[i][0]==1){
        cur++;
        ans=max(ans,cur);
     }
     else
     cur--;
   }
  cout<<ans<<endl;
    return 0;
}