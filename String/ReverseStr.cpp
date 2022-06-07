#include<bits/stdc++.h>
using namespace std;
string ReverseStr(string str){
   reverse(str.begin(),str.end());
   return str;
}

string ReverseStr_1(string str){
   string rev_str="";
   for(int i=str.length()-1;i>=0;i--){
       rev_str+=str[i];
   }
   return rev_str;
}
int main(){
    string str;
    cout<<"Enter String: ";
    cin>>str;
    cout<<"1.Reverse String: "<<ReverseStr(str)<<endl;
    cout<<"2.Reverse String: "<<ReverseStr_1(str);

    return 0;
}