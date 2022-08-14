#include<bits/stdc++.h>
using namespace std;
int findCountAbcDiff(int arr[],int n,int num,int diff){
    int c=0;
    for(int i=0;i<n;i++){
        if(abs(num-arr[i])>=diff )
        c++;
    }
    if(c==0)
    return -1;
    return c;
}
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int num;
    cout<<"Enter Num:";
    cin>>num;
    int diff;
    cout<<"Enter Diff: ";
    cin>>diff;

    cout<<findCountAbcDiff(arr,n,num,diff);
    

    return 0;
}
