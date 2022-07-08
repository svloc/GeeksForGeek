#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter Str: ";
    cin>>str;
    sort(str.begin(),str.end());
    int i=0,j=1,k;
    
    for(int i=0;i<str.size()-1;i++){
        if(str[i]==str[i+1])
        k=1;
        else
        k=0;
    }
    cout<<"K: "<<k;
    return 0;
}
