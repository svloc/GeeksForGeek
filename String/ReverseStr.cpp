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
void rev(string &str){
    int n=str.length();
    int s=0,e=n-1;
    while(s<e){
        swap(str[s],str[e]);
        s++;
        e--;
    }
}
int main(){
    string str;
    cout<<"Enter String: ";
    cin>>str;
    cout<<"1.Reverse String: "<<ReverseStr(str)<<endl;
    cout<<"2.Reverse String: "<<ReverseStr_1(str)<<endl;

    string str1;
    cout<<"Enter String: ";
    cin>>str1;

    rev(str1);
    cout<<str1<<endl;
    return 0;
}