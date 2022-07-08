#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string a,string b){
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    if(a.size()!=b.size())
    return false;
    else{
        for(int i=0;i<a.size();i++)
        if(a[i]!=b[i])
        return false;
    }
    return true;
}
int main(){
    string a,b;
    cout<<"Enter Two String: ";
    cin>>a>>b;
    bool res=isAnagram(a,b);
    if(res)
    cout<<"YES";
    else
    cout<<"N0";
    return 0;
}