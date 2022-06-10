#include<bits/stdc++.h>
using namespace std;
struct  Height
{
  int feets;
  int inches;
};
int findMax(Height arr[],int n){
    int p[n];
  for(int i=0;i<n;i++){
   p[i]=(arr[i].feets*12)+arr[i].inches;
  }
  return *max_element(p,p+n);
}
int main(){
    int n;
    cout<<"Enter N;";
    cin>>n;
    Height arr[n];
    int temp,temp1;
    cout<<"Enter Height: ";
    cin>>temp>>temp1;
    for(int i=0;i<n;i++){
        arr->feets=temp;
        arr->inches=temp1;
    }
    int res=findMax(arr,n);
    cout<<"Result: "<<res;
    return 0;
}