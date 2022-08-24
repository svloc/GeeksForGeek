#include<bits/stdc++.h>
using namespace std;

//arr[1,0,2,0,4]
//1st pass ---> i=0,j=0
//swap(1,1)
//1 0 2 0 4

//2nd pass--> i=1,j=1
//arr[j]==0 --ignore



// 3rd pass -->i=1,j=2
//arr[j]!=0 
//swap(0,2)
// 1 2 0 0 4

// 4th pass --> i=2, j=3
//arr[j]==0 --ignore

// 5th pass i=2,j=4
//arr[j]!=0
//swap(0,4)
//1 2 3 0 0

//6 th pass  i=3, j=5
//here for loop end 
//resulted array==>1 2 3 0 0 ;

void MoveZeroToRight(int arr[],int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j]!=0){
            swap(arr[i],arr[j]);
            i++;
        }
    }
    
}
int main(){
    int n;
    cout<<"enter N: ";
    cin>>n;
    cout<<"Enter N ele: ";
    int arr[n];

    for(int i=0;i<n;i++)
    cin>>arr[i];

    MoveZeroToRight(arr,n);

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

    return 0;
}