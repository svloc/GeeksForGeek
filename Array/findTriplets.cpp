#include<iostream>
using namespace std;

bool findTriplets(int arr[],int n){
for(int i=0;i<n-2;i++){
    for(int j=i+1;j<n-1;j++){
        for(int k=j+1;k<n;k++){
            if(arr[i]+arr[j]+arr[k]==0){
                return 1;
            }
        }
    }
}
return 0;
}
int main(){
    int n;
    cout<<"Enter Size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter The Elelment of array: ";
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    int t=findTriplets(arr,n);
    cout<<t;
    return 0;
}