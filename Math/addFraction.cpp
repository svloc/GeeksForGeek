#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(b==0)
    return a;
    return gcd(b,a%b);
} 

void addFraction(int num1,int den1,int num2,int den2){
   int nx=num1*den2+num2*den1;
   int dx=den1*den2;
   int gc=gcd(nx,dx);
   cout<<nx/gc<<"/"<<dx/gc<<endl;
}
int main(){
    int num1,num2,den1,den2;
    cout<<"Enter Num1 and den1 : ";
    cin>>num1>>den1;
    cout<<"Enter Num2 and den2: ";
    cin>>num2>>den2;
    cout<<"Result: ";
    addFraction(num1,den1,num2,den2);

    return 0;
}