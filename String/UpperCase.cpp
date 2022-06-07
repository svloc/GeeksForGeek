#include<bits/stdc++.h>
using namespace std;


string transform(string s)
{
    // code here
    for(int i=0;i<s.length();i++){
        if(s[i]==20){
            transform(s.begin(),s.end(),s.begin(),::toupper);
        }
    }
    return s;
}
int main(){
     cout<<transform("sachin lokare ss");
    return 0;
}