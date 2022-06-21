#include<bits/stdc++.h>
using namespace std;
void SortOddEven(int arr[],int n){
    vector<int>odd;
    vector<int>even;
    int od=0,en=0;

    for(int i=0;i<n;i++){
       if(arr[i]%2==0){
        even.push_back(arr[i]);
        en++;
       }
       else if(arr[i]%2!=0){
        odd.push_back(arr[i]);
        od++;
       }
    }

    sort(odd.begin(),odd.end(),greater<int>());

    sort(even.begin(),even.end());


    for (int i = 0; i < od; i++)
    arr[i]=odd[i];

    for(int i=od;i<n;i++)
    arr[i]=even[i-od];
    
}
int main(){
 int n;
 cout<<"Enter N: ";
 cin>>n;
 int arr[n];
 cout<<"Enter N values: ";
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }  
 
 SortOddEven(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
 }
 return 0;
}