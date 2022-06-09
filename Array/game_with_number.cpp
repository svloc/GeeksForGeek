#include<bits/stdc++.h>
using namespace std;
int* game_with_number(int arr[],int n){
for(int i=0;i<n;i++){
    arr[i]=arr[i]^arr[i+1];
}
return arr;
}

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Element: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int *arr2;
    arr2=game_with_number(arr,n);
    for(int i=0;i<n;i++){
     cout<<arr2[i]<<" ";
    }
    
    return 0;

}