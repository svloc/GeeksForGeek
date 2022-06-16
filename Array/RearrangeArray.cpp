#include<bits/stdc++.h>
using namespace std;
void Rearrange(int arr[],int n){
vector<int>v;
for(int i=0;i<n;i++){
    if(arr[i]<0)
    v.push_back(arr[i]);
}
for(int i=0;i<n;i++){
    if(arr[i]>0)
    v.push_back(arr[i]);
}

for(int i=0;i<n;i++){
    arr[i]=v[i];
}
}
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    cout<<"Enter N Element: ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Rearrange(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}