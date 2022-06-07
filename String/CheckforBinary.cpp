#include<iostream>
using namespace std;
bool isBinary(string str)
{
   for(int i=0;i<str.length();i++){
       if(str[i]!='0' && str[i]!='1'){
           return false;
       }
   }
   return true;
}
int main(){
    string str;
    cout<<"Enter String: ";
    cin>>str;
    if(isBinary(str)){
        cout<<"Given Number is Binary..";
    }
    else{
        cout<<"Given number is not Binary";
    }
    return 0; 
}