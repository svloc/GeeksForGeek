#include<bits/stdc++.h>
using namespace std;

void rot(vector<int>arr1,int n,int k){
  vector<int>temp;
  for(int i=0;i<n;i++){
    temp[(i+k)%n]=arr1[i];
  }
  arr1=temp;
}
int main(){
    int n,k;
    cout<<"Enter N: ";
    cin>>n;
    cout<<"Enter K: ";
    cin>>k;

    int arr[n];
    cout<<"Enter N element: ";
    for(int i=0;i<n;i++){
    cin>>arr[i];}
    
    for(int i=0;i<n;i++){
        cout<<arr[(i+k)%n]<<" ";
    }

    //vector

    int m;
    cout<<"Enter M: ";
    cin>>m;
    vector<int>arr1(m);
    cout<<"Emter Vector Ele: ";
    for(int i=0;i<m;i++)
    cin>>arr1[i];

    rot(arr1,m,k);

    for(int i=0;i<m;i++){
        cout<<arr1[i]<<" ";
    }

    return 0;
}


// arr==>11 12 13 14
//k=2
//i=0, k=2 n=4

//first pass-->i=0,k=2
// 2%4==2
//temp[2]==arr[0]
// 0 0 11 0


//second pass --i=1,k=2
//3%4==3
//temp[3]=arr[1]
//0 0 11 13

//third pass--i=2,k=2
//4%4==0
//temp[0]=arr[2];
//13 0 11 12

//fourth pass i=3,k=2
//5%4=1
//temp[1]=arr[3]
//13 14 11 12

