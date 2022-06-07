#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int missingNumber(int arr[],int n){
 int smallPos=1;
 sort(arr,arr+n);
  
  for(int i=0;i<n;i++){
      if(arr[i]==smallPos){
          smallPos++;
      }

  }

}
int main(){
    
return 0;
}