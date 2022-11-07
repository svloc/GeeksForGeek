#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int>s;
    int n;
    cout<<"Size of stack";
    cin>>n;
   // cout<<"Enter Ele of stack: ";
    for(int i=1;i<=n;i++)
    s.push(i);

    s.pop();

    cout<<s.top();

    return 0;
}