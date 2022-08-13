#include<bits/stdc++.h>
using namespace std;
void Sort012(int arr[],int n){
    int st=0,md=0,ed=n-1;

    while(md<=ed){
        if(arr[md]==0){
            swap(arr[st],arr[md]);
            st++;
            md++;
        }
        else if(arr[md]==1)
        md++;
        else if(arr[md]==2){
            swap(arr[md],arr[ed]);
            ed--;
        }

    }
}
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array element: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];

    Sort012(arr,n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

    return 0;

}