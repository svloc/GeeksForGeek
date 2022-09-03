#include<bits/stdc++.h>
using namespace std;
int OperationsBinaryString(string str){
    char res;
   int n=str.length();
   
   for(int i=1;i<n-1;i+=2){
    if(str[i]=='A'){
       res=(str[i-1] & str[i+1]);
       str[i+1]=res;
    }
    else if(str[i]=='B'){
       res=(str[i-1]|str[i+1]);
       str[i+1]=res;
    }
    else{
       res=(str[i-1]^str[i+1]);
       str[i+1]=res;
    }
   }
   return str[n-1];
}
int main(){
    string str;
    cout<<"Enter Str: ";
    cin>>str;
    char ch=OperationsBinaryString(str);
    cout<<ch;
    return 0;
}