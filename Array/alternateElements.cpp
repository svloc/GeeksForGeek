#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Enter N: ";
cin>>n;
int arr[n];
cout<<"Enter N Values:";
for(int i=0;i<n;i++){
    cin>>arr[i];
}

for(int i=0;i<n;i+=2){
cout<<arr[i]<<" ";
}
return 0;

}