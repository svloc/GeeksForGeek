#include<bits/stdc++.h>
using namespace std;
int PasswordChecker(string str){
  int n=str.length();
  int res;

  if( n==0||n<4)
   return 0;

  if(str[0]>='0' && str[0]<='9')
   return 0;

  int cp=0,sm=0,nm=0;

  for(int i=0;i<n;i++){
    if(str[i]==' ' || str[i]=='/')
    return 0;

    if(str[i]>='a' && str[i]<='z')
     sm++;
     else if(str[i]>='A' && str[i]<='Z')
     cp++;
     else if(str[i]>='0' && str[i]<='9')
     nm++;
    }

    if(cp>=1 && nm>=1 && sm>=2)
    res=1;

  return res;

}
int main(){
    string str;
    cout<<"Enter Str: ";
    cin>>str;
    cout<<PasswordChecker(str);
    return 0;
}
