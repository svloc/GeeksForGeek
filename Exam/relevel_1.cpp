#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
    int n;
    //cout<<"Enter N: ";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    int ans=0;
    int m=arr[n-1];
    for(int i=n-2;i>=0;i--){
        if(arr[i]>=m){
            // ans+=(arr[i]-m);
            // ans++;
            int t=arr[i]-m+1;
            arr[i]=arr[i]-t;
            ans+=t;
            m=arr[i];

        }
        m=arr[i];
    }
    cout<<ans<<endl;
    }
    return 0;
}
