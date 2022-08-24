#include<bits/stdc++.h>
using namespace std;
vector<int> rev(vector<int>v){
    int s=0,e=v.size()-1;
    while(s<e){
        swap(v[s++],v[e--]);
    }
    return v;
}
vector<int>SumOfTwoArray(int arr[],int n,int arr1[],int m){
    vector<int>v;
    int i=n-1,j=m-1;
    int carry=0;
    int sum=0;
    int ans;
   
    while(i>=0 && j>=0){
        sum=arr[i]+arr1[j]+carry;
        carry=sum/10;
        v.push_back(sum%10);
        i--;
        j--;
    }

    while(i>=0){
        sum=arr[i]+carry;
        carry=sum/10;
        v.push_back(sum%10);
        i--;
    }
    while(j>0){
        sum=arr1[j]+carry;
        carry=sum/10;
        v.push_back(sum%10);
        j--;
    }
    while(carry!=0){
        sum=carry;
        carry=sum/10;
        v.push_back(sum%10);
    }

    return rev(v);
}
int main(){
    int n;
    int m;
    cout<<"Enter N: ";
    cin>>n;
    cout<<"Enter N ele: ";
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    cout<<"Enter M: ";
    cin>>m;
    int arr1[m];
    cout<<"Enter M ele: ";
    for(int i=0;i<m;i++)
    cin>>arr1[i];

    vector<int>v=SumOfTwoArray(arr,n,arr1,m);
    int p=v.size();
    for(int i=0;i<p;i++)
    cout<<v[i]<<" ";
    
    return 0;
}


//arr1==1 2 3 4 --n=4
// arr2==6      --m=1
// 1 2 4 0

// start from end --->
// i=3, j=0
//int sum=10

//carry =10/10==1;
//ans=10%10==0;
//push this 0 to vector
//v-->0
//i--,j--

// but i is not zero

//while(i>=0)
//i=2
//sum=arr1[i]+carry;
//sum=3+1=4
// carry=4/10==0
//ans=4%10==4
//v--> 0 4
//i--

//i=1
//sum=2+0=2;
//carry=0
//ans=2
// v--->0 4 2
//i--

//i=0

//sum=1;
//carry=0;
//ans=1
//v--> 0 4 2 1

//final ans is like ---
// reverse vector 

//1 2 4 0




