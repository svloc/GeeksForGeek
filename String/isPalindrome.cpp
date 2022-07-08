#include<bits/stdc++.h>
using namespace std;
int isPalindrome(string str){
    string str1=str;
    reverse(str.begin(),str.end());
    if(str==str1)
    return 1;
    return 0;
}
int main(){
    string str;
    cout<<"Enter Str: ";
    cin>>str;
    int res=isPalindrome(str); 
    if(res)
    cout<<"Palindrome";
    else
    cout<<"Not Palindrome";
    return 0;
}