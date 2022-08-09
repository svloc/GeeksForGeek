#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter  n: ";
    cin>>n;
    int sp;
    int sd;
    int a;
    
    for(int i=1;i<=n;i++){
      sp=n-i;
      sd=1;
      a=i-1;
      for(int j=1;j<=sp;j++){
        cout<<" ";
      }
      for(int j=sp;j<n;j++){
        cout<<sd;
        sd++;
      }
       for(int j=sp;j<n-1;j++){
            cout<<a;
            a--;
      }

      cout<<endl;
    }
    return 0;
}