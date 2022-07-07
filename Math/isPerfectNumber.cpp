#include<bits/stdc++.h>
using namespace std;
int isPerfectNumber(int n){
    if(n==1)
    return 0;
    int sum=1;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0)
        {
            sum+=i;
            sum+=n/i;
        }
    }
    if(sum==n)
    return 1;

  return 0;
}
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    cout<<"Result: "<<isPerfectNumber(n);
    return 0;
}