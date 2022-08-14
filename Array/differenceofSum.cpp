#include<bits/stdc++.h>
using namespace std;
int differenceofSum(int n,int m){
  int div_by_n=0;
  int total_sum=0;

  for(int i=n;i<=m;i+=n)
    div_by_n+=i;
  

  for(int i=1;i<=m;i++)
    total_sum+=i;
    
  return total_sum-(2*div_by_n);  

}
int main(){
    int n,m;
    cout<<"Enter N: ";
    cin>>n;
    cout<<"Enter M: ";
    cin>>m;
    cout<<differenceofSum(n,m);
    return 0;
}