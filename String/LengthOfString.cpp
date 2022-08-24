#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cout<<"Enter Str: ";
    cin>>str;
    int c=0;
    for(int i=0;str[i]!='\0';i++)
    c++;
    cout<<"Length of str: "<<c;
}