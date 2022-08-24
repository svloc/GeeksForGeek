#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int i=0;
    vector<int>ans;
    if(a[0]==1)
    ans.push_back(0);

    while(i<n){
        int cur=0;
        while(i<n && a[i]!=1 ){
            cur++;
            i++;
        }
    
        ans.push_back(cur);

        i++;
    }
    if(a[n-1]==1)
    ans.push_back(0);

    int s1=0,s2=0;

    int n2=ans.size();
     
    for(int j=1;j<n2-1;j++){
       if(ans[j-1]>0 && ans[j+1]>0){
       if(j%2==0 )
        s1+=ans[j];
       else
       s2+=ans[j];
       }
    }

    if(ans[1]>0)
    s1+=ans[0];
    
    if(ans[n-2]>0){
    if((n-1)%2==0 )
      s1+=ans[n-1];
    else
    s2+=ans[n-1];
    }


    cout<<min(s1,s2)<<endl;
  


    return 0;
}