#include<bits/stdc++.h>
using namespace std;

int isPalindrome(string str){
    string str1=str;
    reverse(str.begin(),str.end());
    if(str==str1)
    return 1;
    return 0;
}

char toLower(char ch){
    if(ch>='a' && ch<='z')
     return ch;
    if(ch>='A' && ch<='Z'){
       return ch-'A'+'a';
    } 
}
int isP(string str){
    int s=0,e=str.size()-1;
    while(s<e){
        if(toLower(str[s])!=toLower(str[e]))
        return 0;
        else if(toLower(str[s])==toLower(str[e]) ) {
            s++;
            e--;
        }

    }
    return 1;
}

int main(){
    string str;
    cout<<"Enter Str: ";
    cin>>str;
    int res=isP(str); 
    if(res)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}