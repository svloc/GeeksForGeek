#include<bits/stdc++.h>
using namespace std;
bool isSubstring(string str,string str1){
    int n=str.length();
    int m=str1.length();
    int i=0, j=0;
    while(i<n && j<m){
        if(str[i]==str1[j])
        i++;
        j++;
    }
    cout<<i<<" "<<m<<" "<<n<<endl;
   return i==m;
}
int main(){
    string str,str1;
    cout<<"Enter Str and str1: ";
    cin>>str>>str1;
    if(isSubstring(str,str1))
     cout<<"Yes";
    else
    cout<<"NO";
    return 0;
}S