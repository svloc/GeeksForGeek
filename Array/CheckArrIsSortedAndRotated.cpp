#include<bits/stdc++.h>
using namespace std;

bool check(int arr[],int n){
    int c=0;
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i])
        c++;
    }
    if(arr[n-1]>arr[0])
        c++;
    return c<=1;
}
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    if(check(arr,n)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}


// arr= 3,4,5,1,2 
//int c=0

//first i=1
//i-1=0

//arr[0]> arr[1]
//3>4
//c=0

//i=2, 
//arr[1]>arr[2]
//4>5
//c=0

//i=3
//arr[2]>arr[3]
//5>1
//c=1

//i=4
//1>2
//Not updated value of c
//c=1

//i=5 out of for loop

//arr[4]>arr[0]
//2>3
//Not updated value of c..\
//c=1;

//True....

